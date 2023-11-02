
@protocol GCControllerProductInfo <GCControllerComponent>

@required

- (NSString *)anonymizedIdentifier;
- (NSString *)detailedProductCategory;
- (NSNumber *)isAttachedToDevice;
- (NSDictionary *)miscellaneous;
- (NSString *)productCategory;
- (void)setMiscellaneous:(NSDictionary *)arg1;
- (NSString *)vendorName;

@end
