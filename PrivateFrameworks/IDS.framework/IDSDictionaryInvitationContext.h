
@interface IDSDictionaryInvitationContext : NSObject <IDSInvitationContext> {
    long long  _contextType;
    NSDictionary * _dictionary;
    NSString * _schemaIdentifier;
}

@property (readonly) long long contextType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *schemaIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)contextType;
- (id)description;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 schema:(id)arg2;
- (id)initWithPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payload;
- (id)schemaIdentifier;

@end
