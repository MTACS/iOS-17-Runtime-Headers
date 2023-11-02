
@interface BlastDoorAPSUserPayloadDeliveryContext : NSObject {
    void aPSUserPayloadDeliveryContext;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool has_count;

- (long long)count;
- (id)description;
- (bool)has_count;
- (id)init;

@end
