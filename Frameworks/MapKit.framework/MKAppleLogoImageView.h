
@interface MKAppleLogoImageView : UIImageView <MKAppleLogoView>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logoForMapType:(unsigned long long)arg1 forDarkMode:(bool)arg2;

- (id)initForMapType:(unsigned long long)arg1 forDarkMode:(bool)arg2;
- (void)setImage:(id)arg1;
- (void)updateForMapType:(unsigned long long)arg1 darkMode:(bool)arg2;

@end
