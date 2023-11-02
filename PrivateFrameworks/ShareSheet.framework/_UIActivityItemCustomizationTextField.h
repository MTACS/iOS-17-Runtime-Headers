
@interface _UIActivityItemCustomizationTextField : _UIActivityItemCustomization <_UIActivityItemCustomizationTextField> {
    id /* block */  __handler;
    NSString * _placeholder;
    NSString * _text;
}

@property (setter=_setHandler:, nonatomic, copy) id /* block */ _handler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *placeholder;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *text;

- (void).cxx_destruct;
- (id /* block */)_handler;
- (void)_setHandler:(id /* block */)arg1;
- (void)_setPlaceholder:(id)arg1;
- (void)_setText:(id)arg1;
- (id)initWithText:(id)arg1 placeholder:(id)arg2 identifier:(id)arg3 footerText:(id)arg4;
- (id)placeholder;
- (id)text;

@end
