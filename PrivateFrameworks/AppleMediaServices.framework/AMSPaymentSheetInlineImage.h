
@interface AMSPaymentSheetInlineImage : NSObject {
    NSString * _URLString;
    long long  _imageType;
    <AMSPaymentSheetAssetConfiguration> * _localAssetConfiguration;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSString *URLString;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly) <AMSPaymentSheetAssetConfiguration> *localAssetConfiguration;
@property (getter=isServerSupplied, nonatomic, readonly) bool serverSupplied;
@property (nonatomic, readonly) bool tint;
@property (nonatomic, readonly, copy) NSString *value;

+ (id)textEncapsulationForServerValue:(id)arg1;

- (void).cxx_destruct;
- (id)URLString;
- (long long)_defaultAssetType;
- (id)_imageAssetConfigurationForDictionary:(id)arg1;
- (long long)_ratingTypeForType:(id)arg1;
- (long long)_scaleForString:(id)arg1;
- (id)_symbolAssetConfigurationForDictionary:(id)arg1;
- (long long)imageType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (bool)isServerSupplied;
- (id)localAssetConfiguration;
- (bool)tint;
- (id)value;

@end
