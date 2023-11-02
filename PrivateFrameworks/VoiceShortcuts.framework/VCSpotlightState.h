
@interface VCSpotlightState : NSObject {
    unsigned long long  _identifier;
    NSDictionary * _syncedShortcuts;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) NSDictionary *syncedShortcuts;

- (void).cxx_destruct;
- (unsigned long long)identifier;
- (id)initWithIdentifier:(unsigned long long)arg1 syncedShortcuts:(id)arg2;
- (id)initWithPath:(id)arg1;
- (bool)isConsistentWithClientState:(unsigned long long)arg1;
- (bool)saveToPath:(id)arg1 error:(id*)arg2;
- (id)syncedShortcuts;

@end
