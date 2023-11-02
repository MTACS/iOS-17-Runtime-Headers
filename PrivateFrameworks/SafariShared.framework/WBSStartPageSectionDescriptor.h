
@interface WBSStartPageSectionDescriptor : NSObject <NSSecureCoding> {
    bool  _enabled;
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly, copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithIdentifier:(id)arg1 enabled:(bool)arg2;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)sectionWithEnabled:(bool)arg1;

@end
