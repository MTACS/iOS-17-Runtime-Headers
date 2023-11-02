
@interface AMSPaymentSheetSymbolAssetConfiguration : NSObject <AMSPaymentSheetAssetConfiguration> {
    NSString * _accessibilityText;
    NSString * _name;
    long long  _scale;
}

@property (nonatomic, readonly, copy) NSString *accessibilityText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long scale;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessibilityText;
- (id)initWithName:(id)arg1 accessibilityText:(id)arg2 scale:(long long)arg3;
- (id)name;
- (long long)scale;

@end
