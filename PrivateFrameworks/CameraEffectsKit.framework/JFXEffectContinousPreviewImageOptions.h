
@interface JFXEffectContinousPreviewImageOptions : JFXEffectContinousPreviewOptions {
    JTImage * _backgroundImage;
    unsigned long long  _preferredUpdatesPerSecond;
}

@property (nonatomic, retain) JTImage *backgroundImage;
@property (nonatomic, readonly) unsigned long long preferredUpdatesPerSecond;

- (void).cxx_destruct;
- (id)backgroundImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initImageOptionsWithFrameRate:(unsigned long long)arg1;
- (unsigned long long)preferredUpdatesPerSecond;
- (void)setBackgroundImage:(id)arg1;

@end
