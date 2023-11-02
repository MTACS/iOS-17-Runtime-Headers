
@interface SBHSidebarVisualConfiguration : NSObject <BSDescriptionProviding, NSCopying> {
    bool  _contentFullscreen;
    double  _contentWidth;
    double  _firstWidgetTopOffset;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _insets;
    double  _searchBarTopOffset;
}

@property (getter=isContentFullscreen, nonatomic) bool contentFullscreen;
@property (nonatomic) double contentWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double firstWidgetTopOffset;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) double searchBarTopOffset;
@property (readonly) Class superclass;

- (double)contentWidth;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)effectiveContentWidthWithContainerWidth:(double)arg1;
- (double)firstWidgetTopOffset;
- (unsigned long long)hash;
- (id)init;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (bool)isContentFullscreen;
- (bool)isEqual:(id)arg1;
- (double)searchBarTopOffset;
- (void)setContentFullscreen:(bool)arg1;
- (void)setContentWidth:(double)arg1;
- (void)setFirstWidgetTopOffset:(double)arg1;
- (void)setInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSearchBarTopOffset:(double)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
