
@interface DOMHTMLVideoElement : DOMHTMLMediaElement

@property unsigned int height;
@property bool playsInline;
@property (copy) NSString *poster;
@property (readonly) unsigned int videoHeight;
@property (readonly) unsigned int videoWidth;
@property (readonly) bool webkitDisplayingFullscreen;
@property (readonly) bool webkitSupportsFullscreen;
@property unsigned int width;

- (unsigned int)height;
- (bool)playsInline;
- (id)poster;
- (void)setHeight:(unsigned int)arg1;
- (void)setPlaysInline:(bool)arg1;
- (void)setPoster:(id)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)videoHeight;
- (unsigned int)videoWidth;
- (bool)webkitDisplayingFullscreen;
- (void)webkitEnterFullScreen;
- (void)webkitEnterFullscreen;
- (void)webkitExitFullScreen;
- (void)webkitExitFullscreen;
- (bool)webkitSupportsFullscreen;
- (unsigned int)width;

@end
