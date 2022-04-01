//
//  Memo.h
//  memoApp
//
//  Created by 김수연 on 2022/04/01.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Memo : NSObject

@property (strong, nonatomic) NSString * content;
@property (strong, nonatomic) NSDate * insertDate;

-(instancetype)initWithContent:(NSString *) content;

+(NSArray* )dummyMemoList;

@end

NS_ASSUME_NONNULL_END
