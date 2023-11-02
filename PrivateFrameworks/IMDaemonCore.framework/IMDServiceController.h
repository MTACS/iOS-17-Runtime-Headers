
@interface IMDServiceController : NSObject {
    NSMutableDictionary * _services;
}

@property (nonatomic, readonly) NSArray *allServices;
@property (nonatomic, retain) NSMutableDictionary *services;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)allServices;
- (id)init;
- (void)registerSessionClassWithBundle:(id)arg1;
- (id)serviceWithName:(id)arg1;
- (id)serviceWithReplicationSourceID:(long long)arg1;
- (id)services;
- (void)setServices:(id)arg1;

@end
