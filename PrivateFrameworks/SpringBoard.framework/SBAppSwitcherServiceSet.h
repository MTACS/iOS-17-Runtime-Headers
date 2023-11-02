
@interface SBAppSwitcherServiceSet : NSObject <NSCopying> {
    NSMutableArray * _services;
}

@property (nonatomic, readonly) NSMutableArray *services;

- (void).cxx_destruct;
- (void)addService:(id)arg1;
- (id)appLayouts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)initWithServices:(id)arg1 zone:(struct _NSZone { }*)arg2;
- (void)removeService:(id)arg1;
- (id)serviceAtIndex:(unsigned long long)arg1;
- (id)serviceBundleIdentifiers;
- (id)serviceForBundleIdentifier:(id)arg1;
- (id)services;

@end
