
@interface UAFAssetStatus : NSObject <NSSecureCoding> {
    unsigned long long  _missing;
    NSString * _siriLanguage;
    unsigned long long  _state;
    NSNumber * _value;
}

@property (nonatomic) unsigned long long missing;
@property (nonatomic, retain) NSString *siriLanguage;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) NSNumber *value;

+ (bool)dictationAvailableForLanguage:(id)arg1;
+ (id)mockAssetStatus;
+ (id)stringFromUAFAssetMissing:(unsigned long long)arg1;
+ (id)stringFromUAFAssetState:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)missing;
- (void)setMissing:(unsigned long long)arg1;
- (void)setSiriLanguage:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (id)siriLanguage;
- (unsigned long long)state;
- (id)value;

@end
