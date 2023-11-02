
@interface DOCAppearance : NSObject <NSCopying, NSSecureCoding> {
    bool  _alwaysEnableScrollInSourceView;
    unsigned long long  _browserUserInterfaceStyle;
    NSString * _collectionCreateButtonTitle;
    double  _compactHorizontalTableStackSpacing;
    double  _defaultDocumentAspectRatio;
    bool  _forceClearBackground;
    double  _fullHorizontalTableStackSpacing;
    double  _regularHorizontalTableStackSpacing;
    bool  _shouldShowFileExtensions;
    bool  _showsCreateButton;
}

@property bool alwaysEnableScrollInSourceView;
@property (readonly) UIColor *backgroundColor;
@property (nonatomic) unsigned long long browserUserInterfaceStyle;
@property (nonatomic, retain) NSString *collectionCreateButtonTitle;
@property (nonatomic) double compactHorizontalTableStackSpacing;
@property (nonatomic) double defaultDocumentAspectRatio;
@property (nonatomic) bool forceClearBackground;
@property (nonatomic) double fullHorizontalTableStackSpacing;
@property (nonatomic) double regularHorizontalTableStackSpacing;
@property (nonatomic) bool shouldShowFileExtensions;
@property (nonatomic) bool showsCreateButton;

+ (id)documentsPickerAppearance;
+ (id)recentsPopoverAppearance;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)alwaysEnableScrollInSourceView;
- (id)backgroundColor;
- (unsigned long long)browserUserInterfaceStyle;
- (id)collectionCreateButtonTitle;
- (double)compactHorizontalTableStackSpacing;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)defaultDocumentAspectRatio;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceClearBackground;
- (double)fullHorizontalTableStackSpacing;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)regularHorizontalTableStackSpacing;
- (void)setAlwaysEnableScrollInSourceView:(bool)arg1;
- (void)setBrowserUserInterfaceStyle:(unsigned long long)arg1;
- (void)setCollectionCreateButtonTitle:(id)arg1;
- (void)setCompactHorizontalTableStackSpacing:(double)arg1;
- (void)setDefaultDocumentAspectRatio:(double)arg1;
- (void)setForceClearBackground:(bool)arg1;
- (void)setFullHorizontalTableStackSpacing:(double)arg1;
- (void)setRegularHorizontalTableStackSpacing:(double)arg1;
- (void)setShouldShowFileExtensions:(bool)arg1;
- (void)setShowsCreateButton:(bool)arg1;
- (bool)shouldShowFileExtensions;
- (bool)showsCreateButton;

@end
