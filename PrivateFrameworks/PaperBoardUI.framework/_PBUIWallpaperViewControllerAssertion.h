
@interface _PBUIWallpaperViewControllerAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {
    bool  _invalidated;
    NSString * _reason;
    long long  _type;
    PBUIWallpaperViewController * _wallpaperViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, readonly, copy) NSString *reason;
@property (readonly) Class superclass;
@property (readonly) long long type;
@property (nonatomic, readonly) PBUIWallpaperViewController *wallpaperViewController;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithWallpaperViewController:(id)arg1 type:(long long)arg2 reason:(id)arg3;
- (void)invalidate;
- (bool)isInvalidated;
- (id)reason;
- (void)setInvalidated:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (long long)type;
- (id)wallpaperViewController;

@end
