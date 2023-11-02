
@interface SBIconVisibilityService : NSObject {
    SBIconModel * _iconModel;
    NSSet * _iconStateDisplayIdentifiers;
    NSLock * _iconStateDisplayIdentifiersLock;
}

- (void).cxx_destruct;
- (void)_visibleIdentifiersChanged:(id)arg1;
- (void)dealloc;
- (id)iconStateDisplayIdentifiers;
- (id)initWithIconModel:(id)arg1;

@end
