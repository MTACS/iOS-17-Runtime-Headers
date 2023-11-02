
@protocol XRFrameActivityManagerPrivate <NSObject>

@required

- (void)_acquiredMinorFrame:(unsigned char)arg1;
- (void)_extendingMinorFrame:(unsigned char)arg1;
- (void)_shutdown;
- (void)_startingMajorFrame;
- (void)_underrunMinorFrame:(unsigned char)arg1;
- (void)_yieldingMinorFrame:(unsigned char)arg1;

@end
