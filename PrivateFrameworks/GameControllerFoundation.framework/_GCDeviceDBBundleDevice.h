
@interface _GCDeviceDBBundleDevice : NSObject {
    NSBundle * _bundle;
    NSString * _identifier;
    NSArray * _ioMatchingPredicates;
    NSArray * _personalityPaths;
}

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSArray *ioMatchingPredicates;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithBundle:(id)arg1 dictionary:(id)arg2 error:(out id*)arg3;
- (id)ioMatchingPredicates;
- (id)personalities;
- (id)redactedDescription;

@end
