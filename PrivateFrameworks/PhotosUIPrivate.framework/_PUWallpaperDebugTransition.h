
@interface _PUWallpaperDebugTransition : NSObject <PUWallpaperTransition> {
    <NSObject> * _animationSettings;
    double  _pu_Duration;
}

@property (nonatomic, retain) <NSObject> *animationSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double pu_Duration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animationSettings;
- (double)pu_Duration;
- (void)setAnimationSettings:(id)arg1;
- (void)setPu_Duration:(double)arg1;

@end
