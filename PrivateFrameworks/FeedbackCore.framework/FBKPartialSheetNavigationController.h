
@interface FBKPartialSheetNavigationController : UINavigationController <UIAdaptivePresentationControllerDelegate> {
    double  _customDetentHeight;
    unsigned long long  _detentBehavior;
}

@property (nonatomic) double customDetentHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long detentBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)detentForCustomHeight:(double)arg1;

- (void)_presentationController:(id)arg1 prepareAdaptivePresentationController:(id)arg2;
- (double)customDetentHeight;
- (unsigned long long)detentBehavior;
- (id)detentForPreferredContentSize;
- (void)setCustomDetentHeight:(double)arg1;
- (void)setDetentBehavior:(unsigned long long)arg1;
- (void)viewDidLoad;

@end
