
@interface UIUScreenShot : NSObject {
    ScreenShotCompat * _underlyingObject;
}

@property (readonly) ScreenShotCompat *underlyingObject;

- (void).cxx_destruct;
- (id)initWithContents:(id)arg1;
- (id)underlyingObject;

@end
