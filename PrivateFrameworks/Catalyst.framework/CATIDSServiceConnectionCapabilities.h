
@interface CATIDSServiceConnectionCapabilities : NSObject {
    bool  _supportsReliableDelivery;
}

@property (nonatomic, readonly) bool supportsReliableDelivery;

- (id)init;
- (id)initWithMessagingVersion:(unsigned long long)arg1;
- (bool)supportsReliableDelivery;

@end
