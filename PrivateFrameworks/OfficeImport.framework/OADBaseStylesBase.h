
@interface OADBaseStylesBase : NSObject {
    OADColorScheme * mColorScheme;
    OADFontScheme * mFontScheme;
    OADStyleMatrix * mStyleMatrix;
}

@property (nonatomic, retain) OADColorScheme *colorScheme;
@property (nonatomic, retain) OADFontScheme *fontScheme;
@property (nonatomic, retain) OADStyleMatrix *styleMatrix;

- (void).cxx_destruct;
- (id)colorScheme;
- (id)description;
- (id)fontScheme;
- (void)setColorScheme:(id)arg1;
- (void)setFontScheme:(id)arg1;
- (void)setStyleMatrix:(id)arg1;
- (id)styleMatrix;

@end
