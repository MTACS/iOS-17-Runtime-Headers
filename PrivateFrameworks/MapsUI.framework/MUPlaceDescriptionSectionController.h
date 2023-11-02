
@interface MUPlaceDescriptionSectionController : MUPlaceSectionController {
    <MUPlaceDescriptionSectionControllerDelegate> * _actionDelegate;
    MUExpandableBlurbView * _blurbView;
    MUPlaceDescriptionConfiguration * _configuration;
    MUPlaceFooterAtributionViewModel * _footerViewModel;
    MUPlaceSectionView * _sectionView;
}

@property (nonatomic) <MUPlaceDescriptionSectionControllerDelegate> *actionDelegate;

- (void).cxx_destruct;
- (void)_attributionTapped;
- (void)_setupTextBlurb;
- (id)actionDelegate;
- (int)analyticsModuleType;
- (id)infoCardChildPossibleActions;
- (id)initWithMapItem:(id)arg1 configuration:(id)arg2;
- (bool)isImpressionable;
- (id)sectionFooterViewModel;
- (id)sectionHeaderViewModel;
- (id)sectionView;
- (void)setActionDelegate:(id)arg1;

@end
