
@interface NTKWorldClockManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _frameworkLock;
    WorldClockManager * _frameworkManager;
}

@property (nonatomic, readonly) NSArray *cities;

+ (id)sharedManager;

- (void).cxx_destruct;
- (unsigned long long)addCity:(id)arg1;
- (bool)canAddCity;
- (bool)checkIfCitiesModified;
- (id)cities;
- (id)init;
- (void)loadCities;
- (void)saveCities;

@end
