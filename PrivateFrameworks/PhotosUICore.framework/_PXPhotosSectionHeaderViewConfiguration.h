
@interface _PXPhotosSectionHeaderViewConfiguration : NSObject <PXGSingleViewLayoutConfiguration> {
    long long  _actionType;
    bool  _allowsPhotosDetailsInteraction;
    NSString * _backdropViewGroupName;
    PXCuratedLibrarySectionHeaderLayoutSpec * _buttonSpec;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    NSDate * _endDate;
    double  _gradientAlpha;
    UIImage * _gradientImage;
    double  _gradientOverhang;
    long long  _headerStyle;
    NSArray * _locationNames;
    NSDate * _startDate;
    NSString * _title;
    _PXAlbumSectionHeaderLayout * weakLayout;
}

@property (nonatomic) long long actionType;
@property (nonatomic) bool allowsPhotosDetailsInteraction;
@property (nonatomic, copy) NSString *backdropViewGroupName;
@property (nonatomic, retain) PXCuratedLibrarySectionHeaderLayoutSpec *buttonSpec;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) double gradientAlpha;
@property (nonatomic, retain) UIImage *gradientImage;
@property (nonatomic) double gradientOverhang;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long headerStyle;
@property (nonatomic, copy) NSArray *locationNames;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) _PXAlbumSectionHeaderLayout *weakLayout;

- (void).cxx_destruct;
- (long long)actionType;
- (bool)allowsPhotosDetailsInteraction;
- (id)backdropViewGroupName;
- (id)buttonSpec;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)endDate;
- (double)gradientAlpha;
- (id)gradientImage;
- (double)gradientOverhang;
- (long long)headerStyle;
- (id)locationNames;
- (void)setActionType:(long long)arg1;
- (void)setAllowsPhotosDetailsInteraction:(bool)arg1;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)setButtonSpec:(id)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEndDate:(id)arg1;
- (void)setGradientAlpha:(double)arg1;
- (void)setGradientImage:(id)arg1;
- (void)setGradientOverhang:(double)arg1;
- (void)setHeaderStyle:(long long)arg1;
- (void)setLocationNames:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setWeakLayout:(id)arg1;
- (id)startDate;
- (id)title;
- (id)weakLayout;

@end
