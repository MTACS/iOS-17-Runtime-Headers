
@interface WLSettings : NSObject {
    bool  _enableDisplayZoom;
}

@property (nonatomic) bool enableDisplayZoom;

- (bool)enableDisplayZoom;
- (id)init;
- (void)setEnableDisplayZoom:(bool)arg1;

@end
