
@interface MKDisplay : NSObject {
    bool  _enableDisplayDarkMode;
    bool  _enableDisplayZoom;
}

@property (nonatomic) bool enableDisplayDarkMode;
@property (nonatomic) bool enableDisplayZoom;

- (bool)enableDisplayDarkMode;
- (bool)enableDisplayZoom;
- (id)initWithData:(id)arg1;
- (void)setEnableDisplayDarkMode:(bool)arg1;
- (void)setEnableDisplayZoom:(bool)arg1;

@end
