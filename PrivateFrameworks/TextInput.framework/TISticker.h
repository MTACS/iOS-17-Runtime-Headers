
@interface TISticker : NSObject <NSSecureCoding> {
    NSString * _accessibilityLabel;
    NSDictionary * _attributionInfo;
    long long  _effectType;
    NSString * _externalURI;
    NSUUID * _identifier;
    NSData * _metadata;
    NSString * _name;
    NSArray * _representations;
}

@property (readonly) NSString *accessibilityLabel;
@property (readonly) NSDictionary *attributionInfo;
@property (readonly) long long effectType;
@property (readonly) NSString *externalURI;
@property (readonly) NSUUID *identifier;
@property (readonly) NSData *metadata;
@property (readonly) NSString *name;
@property (readonly) NSArray *representations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)attributionInfo;
- (long long)effectType;
- (void)encodeWithCoder:(id)arg1;
- (id)externalURI;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 representations:(id)arg2 effectType:(long long)arg3 name:(id)arg4 externalURI:(id)arg5 accessibilityLabel:(id)arg6 metadata:(id)arg7 attributionInfo:(id)arg8;
- (id)metadata;
- (id)name;
- (id)representations;

@end
