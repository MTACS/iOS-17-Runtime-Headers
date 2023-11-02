
@interface ICNavigationItemConfiguration : NSObject {
    unsigned long long  _lastUpdateHash;
}

@property (nonatomic) unsigned long long lastUpdateHash;
@property (nonatomic, readonly) bool needsUpdate;

- (id)init;
- (unsigned long long)lastUpdateHash;
- (bool)needsUpdate;
- (void)reset;
- (void)setLastUpdateHash:(unsigned long long)arg1;
- (bool)updateAnimated:(bool)arg1;

@end
