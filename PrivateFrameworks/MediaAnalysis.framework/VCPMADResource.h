
@interface VCPMADResource : NSObject

@property (nonatomic, readonly) long long activeCost;
@property (nonatomic, readonly) long long inactiveCost;

- (long long)activeCost;
- (id)description;
- (long long)inactiveCost;
- (void)purge;

@end
