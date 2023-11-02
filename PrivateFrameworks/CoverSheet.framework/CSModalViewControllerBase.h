
@interface CSModalViewControllerBase : CSCoverSheetViewControllerBase <CSModalViewDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)viewClass;

- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)handlePrimaryActionForView:(id)arg1;
- (void)handleSecondaryActionForView:(id)arg1;
- (bool)isPortrait;
- (long long)presentationPriority;
- (long long)presentationStyle;
- (long long)presentationType;
- (id)view;
- (void)viewDidLoad;
- (id)viewIfLoaded;

@end
