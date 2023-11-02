
@interface RTIAssistantItem : NSObject <NSCopying, NSSecureCoding> {
    float  _centerViewPreferredWidth;
    UIColor * _detachedBackgroundColor;
    UIColor * _detachedTintColor;
    NSArray * _leadingBarButtonGroups;
    bool  _showsBarButtonItemsInline;
    bool  _showsInputDashboardViewController;
    NSArray * _trailingBarButtonGroups;
    bool  _visibleWhenMinimized;
}

@property (nonatomic) float centerViewPreferredWidth;
@property (nonatomic, retain) UIColor *detachedBackgroundColor;
@property (nonatomic, retain) UIColor *detachedTintColor;
@property (nonatomic, retain) NSArray *leadingBarButtonGroups;
@property (nonatomic) bool showsBarButtonItemsInline;
@property (nonatomic) bool showsInputDashboardViewController;
@property (nonatomic, retain) NSArray *trailingBarButtonGroups;
@property (nonatomic) bool visibleWhenMinimized;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)centerViewPreferredWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detachedBackgroundColor;
- (id)detachedTintColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)leadingBarButtonGroups;
- (void)setCenterViewPreferredWidth:(float)arg1;
- (void)setDetachedBackgroundColor:(id)arg1;
- (void)setDetachedTintColor:(id)arg1;
- (void)setLeadingBarButtonGroups:(id)arg1;
- (void)setShowsBarButtonItemsInline:(bool)arg1;
- (void)setShowsInputDashboardViewController:(bool)arg1;
- (void)setTrailingBarButtonGroups:(id)arg1;
- (void)setVisibleWhenMinimized:(bool)arg1;
- (bool)showsBarButtonItemsInline;
- (bool)showsInputDashboardViewController;
- (id)trailingBarButtonGroups;
- (bool)visibleWhenMinimized;

@end
