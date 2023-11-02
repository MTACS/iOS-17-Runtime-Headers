
@interface CRSIdentifiedServiceRegistry : NSObject {
    NSMutableOrderedSet * _identifiedServices;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)identifiedServices;
- (id)init;
- (void)registerIdentifiedService:(id)arg1;

@end
