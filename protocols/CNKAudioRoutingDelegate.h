
@protocol CNKAudioRoutingDelegate <NSObject>

@required

- (UIImage *)audioRouteGlyphFor:(TURoute *)arg1;
- (UIImage *)audioRouteGlyphForDevice;
- (UIMenu *)audioRouteMenu;

@end
