
@interface AXMMADSService : NSObject {
    MADService * _service;
}

@property (nonatomic, retain) MADService *service;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)service;
- (void)setService:(id)arg1;

@end
