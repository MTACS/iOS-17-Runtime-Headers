
@interface _PXStoryTimeBasedAssetInfo : NSObject {
    NSDate * _date;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)date;
- (id)initWithDate:(id)arg1 uuid:(id)arg2;
- (id)uuid;

@end
