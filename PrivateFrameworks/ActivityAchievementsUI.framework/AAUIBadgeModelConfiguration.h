
@interface AAUIBadgeModelConfiguration : NSObject {
    NSArray * _badgeModelPaths;
    NSArray * _badgeTexturePaths;
    NSArray * _enamelTriColors;
    bool  _faceHasMetalInlay;
    struct CGPoint { 
        double x; 
        double y; 
    }  _glyphPositionOffset;
    NSString * _glyphTexturePath;
    double  _glyphTextureScale;
    UIColor * _metalColor;
    UIColor * _modelEnamelColor;
    NSString * _shapeName;
    bool  _unearnedUsesTwoToneEnamel;
    bool  _useFullColorEnamel;
}

@property (nonatomic, retain) NSArray *badgeModelPaths;
@property (nonatomic, readonly) unsigned long long badgeShape;
@property (nonatomic, retain) NSArray *badgeTexturePaths;
@property (nonatomic, copy) NSArray *enamelTriColors;
@property (nonatomic) bool faceHasMetalInlay;
@property (nonatomic) struct CGPoint { double x1; double x2; } glyphPositionOffset;
@property (nonatomic, copy) NSString *glyphTexturePath;
@property (nonatomic) double glyphTextureScale;
@property (nonatomic, copy) UIColor *metalColor;
@property (nonatomic, copy) UIColor *modelEnamelColor;
@property (nonatomic, copy) NSString *shapeName;
@property (nonatomic) bool unearnedUsesTwoToneEnamel;
@property (nonatomic) bool useFullColorEnamel;

- (void).cxx_destruct;
- (id)badgeModelPaths;
- (unsigned long long)badgeShape;
- (id)badgeTexturePaths;
- (id)enamelTriColors;
- (bool)faceHasMetalInlay;
- (struct CGPoint { double x1; double x2; })glyphPositionOffset;
- (id)glyphTexturePath;
- (double)glyphTextureScale;
- (id)init;
- (id)initWithModelPaths:(id)arg1 texturePaths:(id)arg2 shapeName:(id)arg3 metalColor:(id)arg4 useFullColorEnamel:(bool)arg5 modelEnamelColor:(id)arg6 unearnedUsesTwoToneEnamel:(bool)arg7 faceHasMetalInlay:(bool)arg8 enamelTricolors:(id)arg9 glyphTexturePath:(id)arg10 glyphTextureScale:(double)arg11 glyphPositionOffset:(struct CGPoint { double x1; double x2; })arg12;
- (id)metalColor;
- (id)modelEnamelColor;
- (void)setBadgeModelPaths:(id)arg1;
- (void)setBadgeTexturePaths:(id)arg1;
- (void)setEnamelTriColors:(id)arg1;
- (void)setFaceHasMetalInlay:(bool)arg1;
- (void)setGlyphPositionOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setGlyphTexturePath:(id)arg1;
- (void)setGlyphTextureScale:(double)arg1;
- (void)setMetalColor:(id)arg1;
- (void)setModelEnamelColor:(id)arg1;
- (void)setShapeName:(id)arg1;
- (void)setUnearnedUsesTwoToneEnamel:(bool)arg1;
- (void)setUseFullColorEnamel:(bool)arg1;
- (id)shapeName;
- (bool)unearnedUsesTwoToneEnamel;
- (bool)useFullColorEnamel;

@end
