
@interface PBFFocusPosterConfigurationMetadata : NSObject {
    UIImage * _cachedSnapshot;
    bool  _checked;
    NSString * _otherFocusDisplayName;
    NSString * _otherFocusSymbolImageName;
    <PBFPosterPreview> * _posterPreview;
}

@property (nonatomic, retain) UIImage *cachedSnapshot;
@property (getter=isChecked, nonatomic) bool checked;
@property (nonatomic, copy) NSString *otherFocusDisplayName;
@property (nonatomic, copy) NSString *otherFocusSymbolImageName;
@property (nonatomic, retain) <PBFPosterPreview> *posterPreview;

- (void).cxx_destruct;
- (id)cachedSnapshot;
- (bool)isChecked;
- (id)otherFocusDisplayName;
- (id)otherFocusSymbolImageName;
- (id)posterPreview;
- (void)setCachedSnapshot:(id)arg1;
- (void)setChecked:(bool)arg1;
- (void)setOtherFocusDisplayName:(id)arg1;
- (void)setOtherFocusSymbolImageName:(id)arg1;
- (void)setPosterPreview:(id)arg1;

@end
