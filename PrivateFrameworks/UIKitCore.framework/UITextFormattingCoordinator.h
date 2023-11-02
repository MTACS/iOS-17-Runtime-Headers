
@interface UITextFormattingCoordinator : NSObject <UIFontPickerViewControllerDelegate> {
    <UITextFormattingCoordinatorDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITextFormattingCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)isFontPanelVisible;
+ (id)textFormattingCoordinatorForWindowScene:(id)arg1;
+ (void)toggleFontPanel:(id)arg1;

- (void).cxx_destruct;
- (id)delegate;
- (void)fontPickerViewControllerDidPickFont:(id)arg1;
- (id)initWithWindowScene:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedAttributes:(id)arg1 isMultiple:(bool)arg2;
- (void)updateTextAttributesWithConversionHandler:(id /* block */)arg1;

@end
