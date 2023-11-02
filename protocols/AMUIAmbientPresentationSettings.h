
@protocol AMUIAmbientPresentationSettings <NSObject>

@required

- (long long)ambientDisplayStyle;
- (bool)isAmbientPresented;
- (void)setAmbientDisplayStyle:(long long)arg1;
- (void)setAmbientPresented:(bool)arg1;

@end
