
@interface TRAPreferencesOrientation : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    bool  _canDetermineActiveOrientation;
    long long  _preferredOrientation;
    unsigned long long  _supportedOrientations;
}

@property (nonatomic) bool canDetermineActiveOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long preferredOrientation;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long supportedOrientations;

- (bool)canDetermineActiveOrientation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithOrientationPreferences:(id)arg1;
- (id)initWithSupportedMask:(unsigned long long)arg1 determinesActiveOrientation:(bool)arg2;
- (id)initWithSupportedMask:(unsigned long long)arg1 preferred:(long long)arg2 determinesActiveOrientation:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToOrientationPreferences:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)preferredOrientation;
- (void)setCanDetermineActiveOrientation:(bool)arg1;
- (void)setPreferredOrientation:(long long)arg1;
- (void)setSupportedOrientations:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedOrientations;

@end
