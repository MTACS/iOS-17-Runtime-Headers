
@interface _UISticker : NSObject <NSSecureCoding> {
    NSString * _accessibilityLabel;
    NSDictionary * _attributionInfo;
    long long  _effectType;
    NSString * _externalURI;
    NSString * _identifier;
    NSData * _metadata;
    NSString * _name;
    NSArray * _representations;
}

@property (nonatomic, retain) NSString *accessibilityLabel;
@property (nonatomic, retain) NSDictionary *attributionInfo;
@property (nonatomic) long long effectType;
@property (nonatomic, retain) NSString *externalURI;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSData *metadata;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *representations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)attributionInfo;
- (long long)effectType;
- (void)encodeWithCoder:(id)arg1;
- (id)externalURI;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (id)name;
- (id)representations;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAttributionInfo:(id)arg1;
- (void)setEffectType:(long long)arg1;
- (void)setExternalURI:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRepresentations:(id)arg1;

@end
