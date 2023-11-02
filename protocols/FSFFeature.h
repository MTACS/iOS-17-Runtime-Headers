
@protocol FSFFeature

@required

- (NSString *)interactionId;
- (NSData *)json;

@optional

- (NSString *)getSerializedData;

@end
