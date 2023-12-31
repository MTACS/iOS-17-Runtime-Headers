
@interface HUGridHeadlineCellLayoutOptions : HUGridCellLayoutOptions {
    double  _containerLeadingMargin;
    double  _containerTrailingMargin;
    bool  _editing;
    double  _editingBackgroundHeight;
    double  _headlineBaselineOffset;
    double  _minimumFontSize;
    long long  _viewSizeSubclass;
    double  _viewWidth;
}

@property (nonatomic, readonly) double containerLeadingMargin;
@property (nonatomic, readonly) double containerTrailingMargin;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic) double editingBackgroundHeight;
@property (nonatomic, readonly) double editingBackgroundMinimumWidth;
@property (nonatomic) double headlineBaselineOffset;
@property (nonatomic) double minimumFontSize;
@property (nonatomic, readonly) long long viewSizeSubclass;
@property (nonatomic, readonly) double viewWidth;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;
+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1 viewSizeSubclass:(long long)arg2 viewWidth:(double)arg3 containerLeadingMargin:(double)arg4 containerTrailingMargin:(double)arg5;

- (double)cellInnerMargin;
- (double)containerLeadingMargin;
- (double)containerTrailingMargin;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)editingBackgroundHeight;
- (double)editingBackgroundMinimumWidth;
- (double)headlineBaselineOffset;
- (bool)isEditing;
- (double)minimumFontSize;
- (void)setEditing:(bool)arg1;
- (void)setEditingBackgroundHeight:(double)arg1;
- (void)setHeadlineBaselineOffset:(double)arg1;
- (void)setMinimumFontSize:(double)arg1;
- (long long)viewSizeSubclass;
- (double)viewWidth;

@end
