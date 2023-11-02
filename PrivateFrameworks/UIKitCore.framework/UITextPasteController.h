
@interface UITextPasteController : NSObject <UITextPasteCoordinatorDelegate> {
    NSMapTable * _sessions;
    <UITextPasteConfigurationSupporting_Internal> * _supportingView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <UITextPasteConfigurationSupporting_Internal> *supportingView;

+ (id)combineAttributedStrings:(id)arg1 addingSeparation:(bool)arg2;

- (void).cxx_destruct;
- (id)_clampRange:(id)arg1;
- (id)_combineItemAttributedStrings:(id)arg1 forRange:(id)arg2;
- (void)_executePasteForSession:(id)arg1;
- (bool)_pasteDelegateHandlesPasting;
- (void)_performPasteOfAttributedString:(id)arg1 toRange:(id)arg2 forSession:(id)arg3 completion:(id /* block */)arg4;
- (void)_restorePasteResultForSession:(id)arg1;
- (void)_transformTextPasteItem:(id)arg1;
- (id)beginDroppingItems:(id)arg1 toSelectedRange:(id)arg2 progressSupport:(id)arg3 animated:(bool)arg4;
- (id)beginDroppingItems:(id)arg1 toSelectedRange:(id)arg2 progressSupport:(id)arg3 animated:(bool)arg4 delegate:(id)arg5;
- (id)beginPastingItems:(id)arg1 toRange:(id)arg2;
- (id)beginPastingItems:(id)arg1 toRange:(id)arg2 delegate:(id)arg3 matchesTextStyles:(bool)arg4;
- (void)coordinator:(id)arg1 endPastingItems:(id)arg2;
- (id)initWithSupportingView:(id)arg1;
- (void)setSupportingView:(id)arg1;
- (id)supportingView;

@end
