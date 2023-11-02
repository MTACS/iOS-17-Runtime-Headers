
@interface UIActivityItemCustomization : NSObject {
    bool  _enabled;
    NSString * _identifier;
    NSString * _title;
}

@property (nonatomic) bool enabled;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)actionCustomizationWithTitle:(id)arg1 identifier:(id)arg2 handler:(id /* block */)arg3;
+ (id)pickerCustomizationWithTitle:(id)arg1 identifier:(id)arg2 options:(id)arg3 selectedOptionIndex:(long long)arg4 valueChangedHandler:(id /* block */)arg5;
+ (id)switchCustomizationWithTitle:(id)arg1 identifier:(id)arg2 value:(bool)arg3 valueChangedHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 identifier:(id)arg2;
- (bool)enabled;
- (id)identifier;
- (void)setEnabled:(bool)arg1;
- (id)title;

@end
