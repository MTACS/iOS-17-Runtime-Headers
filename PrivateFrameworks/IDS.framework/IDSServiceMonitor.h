
@interface IDSServiceMonitor : NSObject {
    long long  _availability;
    NSString * _service;
    int  _token;
}

@property (nonatomic, readonly) NSString *service;

- (void).cxx_destruct;
- (void)_postAvailability:(long long)arg1;
- (void)_updateAvailability;
- (void)dealloc;
- (id)description;
- (id)initWithService:(id)arg1;
- (id)service;
- (long long)serviceAvailability;
- (void)updateAvailability;

@end
