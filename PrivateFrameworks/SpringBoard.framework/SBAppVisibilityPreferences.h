
@interface SBAppVisibilityPreferences : NSObject {
    NSString * _bundleID;
    NSString * _containerPath;
    bool  _currentlyVisible;
    bool  _defaultVisible;
}

@property (getter=isCurrentlyVisible, readonly) bool currentlyVisible;
@property (getter=isDefaultVisible, readonly) bool defaultVisible;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDefaultVisible:(bool)arg1 bundleID:(id)arg2 containerPath:(id)arg3;
- (bool)isCurrentlyVisible;
- (bool)isDefaultVisible;
- (bool)update;

@end
