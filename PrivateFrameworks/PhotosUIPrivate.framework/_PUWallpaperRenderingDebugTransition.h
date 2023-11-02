
@interface _PUWallpaperRenderingDebugTransition : NSObject <PUWallpaperTransition> {
    double  _pu_Duration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double pu_Duration;
@property (readonly) Class superclass;

- (double)pu_Duration;
- (void)setPu_Duration:(double)arg1;

@end
