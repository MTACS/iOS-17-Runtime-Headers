
@interface HUGridServiceCellLayoutOptions : HUGridCellLayoutOptions {
    double  _iconToTitleSpacing;
    double  _lineSpacing;
    bool  _showAccessoryView;
    bool  _showDescription;
    bool  _showIconOnly;
}

@property (nonatomic) double iconToTitleSpacing;
@property (nonatomic) double lineSpacing;
@property (getter=shouldShowAccessoryView, nonatomic) bool showAccessoryView;
@property (getter=shouldShowDescription, nonatomic) bool showDescription;
@property (getter=shouldShowIconOnly, nonatomic) bool showIconOnly;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)iconToTitleSpacing;
- (double)lineSpacing;
- (void)setIconToTitleSpacing:(double)arg1;
- (void)setLineSpacing:(double)arg1;
- (void)setShowAccessoryView:(bool)arg1;
- (void)setShowDescription:(bool)arg1;
- (void)setShowIconOnly:(bool)arg1;
- (bool)shouldShowAccessoryView;
- (bool)shouldShowDescription;
- (bool)shouldShowIconOnly;

@end
