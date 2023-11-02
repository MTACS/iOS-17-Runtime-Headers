
@interface RCChangeTag : NSObject <NSSecureCoding, RCSerializable> {
    NSString * _contentHash;
    NSString * _identifier;
    NSString * _lastModifiedString;
}

@property (nonatomic, readonly, copy) NSString *contentHash;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *lastModifiedString;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentHash;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 contentHash:(id)arg2 lastModifiedString:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)lastModifiedString;

@end
