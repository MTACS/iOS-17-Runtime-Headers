
@interface SPUnknownProductInfo : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _capabilities;
    SPUnknownProductMetadata * _disableMetadata;
    SPUnknownProductMetadata * _learnModeMetadata;
    NSString * _manufacturerName;
    NSString * _modelName;
}

@property (nonatomic) unsigned long long capabilities;
@property (nonatomic, copy) SPUnknownProductMetadata *disableMetadata;
@property (nonatomic, copy) SPUnknownProductMetadata *learnModeMetadata;
@property (nonatomic, copy) NSString *manufacturerName;
@property (nonatomic, copy) NSString *modelName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)capabilities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)disableMetadata;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)learnModeMetadata;
- (id)manufacturerName;
- (id)modelName;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setDisableMetadata:(id)arg1;
- (void)setLearnModeMetadata:(id)arg1;
- (void)setManufacturerName:(id)arg1;
- (void)setModelName:(id)arg1;

@end
