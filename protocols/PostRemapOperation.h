
@protocol PostRemapOperation <NSObject>

@required

- (NSNumber *)getHashOpModValue;
- (NSString *)getPostRemapOperationName;
- (NSNumber *)getTruncateOpMaxValue;
- (NSNumber *)getTruncateOpMinValue;

@end
