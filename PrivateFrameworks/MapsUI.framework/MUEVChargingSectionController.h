
@interface MUEVChargingSectionController : MUPlaceSectionController {
    void _sectionViews;
    void viewModel;
}

@property (nonatomic) bool active;
@property (nonatomic, readonly) int analyticsModuleType;
@property (nonatomic, retain) <MUPlaceSectionControllerDelegate> *delegate;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool isImpressionable;
@property (nonatomic, readonly) NSArray *sectionViews;

- (void).cxx_destruct;
- (int)analyticsModuleType;
- (id)delegate;
- (bool)hasContent;
- (id)initWithMapItem:(id)arg1;
- (id)initWithMapItem:(id)arg1 availabilityProvider:(id)arg2;
- (bool)isActive;
- (bool)isImpressionable;
- (id)sectionViews;
- (void)setActive:(bool)arg1;
- (void)setDelegate:(id)arg1;

@end
