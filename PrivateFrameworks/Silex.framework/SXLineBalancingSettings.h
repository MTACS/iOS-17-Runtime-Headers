
@interface SXLineBalancingSettings : NSObject {
    bool  _enableLineBalancing;
}

@property (nonatomic, readonly) bool enableLineBalancing;

- (bool)enableLineBalancing;
- (id)initWithLineBalancingEnabled:(bool)arg1;

@end
