
@interface MusicUI.JSRestrictionsController : NSObject <MusicUI.JSRestrictionsControllerExports> {
    void _areMoviesRestricted;
    void _areMusicVideosRestricted;
    void _isExplicitContentRestricted;
    void _isSocialDisabled;
    void _isTVRestricted;
    void restrictionsController;
}

@property (nonatomic, retain) JSValue *areMoviesRestricted;
@property (nonatomic, retain) JSValue *areMusicVideosRestricted;
@property (nonatomic, retain) JSValue *isExplicitContentRestricted;
@property (nonatomic, retain) JSValue *isSocialDisabled;
@property (nonatomic, retain) JSValue *isTVRestricted;

- (void).cxx_destruct;
- (id)areMoviesRestricted;
- (id)areMusicVideosRestricted;
- (id)init;
- (id)isExplicitContentRestricted;
- (id)isSocialDisabled;
- (id)isTVRestricted;
- (void)setAreMoviesRestricted:(id)arg1;
- (void)setAreMusicVideosRestricted:(id)arg1;
- (void)setIsExplicitContentRestricted:(id)arg1;
- (void)setIsSocialDisabled:(id)arg1;
- (void)setIsTVRestricted:(id)arg1;

@end
