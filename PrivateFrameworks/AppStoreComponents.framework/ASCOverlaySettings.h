
@interface ASCOverlaySettings : NSObject

@property (nonatomic, copy) NSNumber *overlaysLoadTimeout;
@property (nonatomic, copy) NSNumber *rateLimitRequestsPerSecond;
@property (nonatomic, copy) NSNumber *rateLimitTimeWindow;

+ (id)sharedSettings;

- (id)_init;
- (id)overlaysLoadTimeout;
- (id)rateLimitRequestsPerSecond;
- (id)rateLimitTimeWindow;
- (void)setOverlaysLoadTimeout:(id)arg1;
- (void)setRateLimitRequestsPerSecond:(id)arg1;
- (void)setRateLimitTimeWindow:(id)arg1;

@end
