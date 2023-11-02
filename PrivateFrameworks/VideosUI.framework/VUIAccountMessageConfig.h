
@interface VUIAccountMessageConfig : NSObject {
    bool  _alwaysForceOpenSidebarAnimated;
    bool  _alwaysForceOpenSidebarNonAnimated;
    long long  _fallbackVisibilityType;
    NSDictionary * _visibilityBehaviours;
}

@property (nonatomic) bool alwaysForceOpenSidebarAnimated;
@property (nonatomic) bool alwaysForceOpenSidebarNonAnimated;
@property (nonatomic) long long fallbackVisibilityType;
@property (nonatomic, retain) NSDictionary *visibilityBehaviours;

- (void).cxx_destruct;
- (id)_createVisibilityDictionary;
- (long long)_getFallbackVisibilityType;
- (bool)alwaysForceOpenSidebarAnimated;
- (bool)alwaysForceOpenSidebarNonAnimated;
- (long long)fallbackVisibilityType;
- (id)init;
- (void)setAlwaysForceOpenSidebarAnimated:(bool)arg1;
- (void)setAlwaysForceOpenSidebarNonAnimated:(bool)arg1;
- (void)setFallbackVisibilityType:(long long)arg1;
- (void)setVisibilityBehaviours:(id)arg1;
- (id)visibilityBehaviours;

@end
