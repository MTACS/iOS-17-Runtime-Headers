
@protocol DBHomeManagerObserver <NSObject>

@required

- (void)homeManager:(DBHomeManager *)arg1 didUpdateHomes:(NSDictionary *)arg2;
- (void)homeManager:(DBHomeManager *)arg1 willRemoveHomes:(NSDictionary *)arg2;

@end
