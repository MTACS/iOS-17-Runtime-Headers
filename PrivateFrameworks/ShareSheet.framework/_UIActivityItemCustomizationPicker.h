
@interface _UIActivityItemCustomizationPicker : _UIActivityItemCustomization <_UIActivityItemCustomizationPicker> {
    id /* block */  __handler;
    NSArray * _optionTitles;
    long long  _previousSelectedOptionIndex;
    long long  _selectedOptionIndex;
}

@property (setter=_setHandler:, nonatomic, copy) id /* block */ _handler;
@property (nonatomic, readonly) NSArray *_optionTitles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long previousSelectedOptionIndex;
@property (nonatomic, readonly) long long selectedOptionIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_handler;
- (id)_optionTitles;
- (void)_setHandler:(id /* block */)arg1;
- (void)_setSelectedOptionIndex:(long long)arg1;
- (id)initWithIdentifier:(id)arg1 optionTitles:(id)arg2 selectedOptionIndex:(long long)arg3 footerText:(id)arg4;
- (long long)previousSelectedOptionIndex;
- (long long)selectedOptionIndex;

@end
