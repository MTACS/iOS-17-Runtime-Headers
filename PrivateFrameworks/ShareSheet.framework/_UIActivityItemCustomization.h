
@interface _UIActivityItemCustomization : NSObject {
    bool  _enabled;
    NSString * _footerText;
    NSString * _identifier;
    NSString * _title;
}

@property (nonatomic) bool enabled;
@property (nonatomic, readonly, copy) NSString *footerText;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)actionCustomizationWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3 handler:(id /* block */)arg4;
+ (id)pickerCustomizationWithIdentifier:(id)arg1 options:(id)arg2 selectedOptionIndex:(long long)arg3 footerText:(id)arg4 valueChangedHandler:(id /* block */)arg5;
+ (id)switchCustomizationWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3 value:(bool)arg4 valueChangedHandler:(id /* block */)arg5;
+ (id)textFieldCustomizationWithText:(id)arg1 placeholder:(id)arg2 identifier:(id)arg3 footerText:(id)arg4 textChangedHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 identifier:(id)arg2 footerText:(id)arg3;
- (bool)enabled;
- (id)footerText;
- (id)identifier;
- (void)setEnabled:(bool)arg1;
- (id)title;

@end
