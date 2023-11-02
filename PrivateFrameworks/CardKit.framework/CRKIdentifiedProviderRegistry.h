
@interface CRKIdentifiedProviderRegistry : NSObject {
    NSMutableOrderedSet * _identifiedProviders;
}

@property (nonatomic, readonly) NSArray *identifiedProviders;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)identifiedProviders;
- (id)init;
- (void)registerIdentifiedProvider:(id)arg1;
- (void)unregisterIdentifiedProvider:(id)arg1;

@end
