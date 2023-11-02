
@interface PPLocationCache : NSObject {
    PPLocation * _home;
    NSMutableSet * _homeOrWorkAddresses;
    PPLocalLocationStore * _locationStore;
    bool  _valid;
    PPLocation * _work;
}

- (void).cxx_destruct;
- (void)_refresh;
- (id)homeOrWorkAddresses;
- (id)init;
- (id)initWithLocationStore:(id)arg1;
- (void)invalidate;
- (id)locationForHome;
- (id)locationForWork;

@end
