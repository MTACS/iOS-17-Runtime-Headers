
@interface SBApplicationSceneViewStatusBarDescriptor : NSObject {
    bool  _forceHidden;
}

@property (getter=isForcedHidden, nonatomic) bool forceHidden;

+ (id)statusBarDescriptorWithForceHidden:(bool)arg1;

- (id)debugDescription;
- (id)initWithForceHidden:(bool)arg1;
- (bool)isForcedHidden;
- (void)setForceHidden:(bool)arg1;

@end
