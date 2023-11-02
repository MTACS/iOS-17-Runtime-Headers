
@interface _INPBSearchForContactIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSearchForContactIntentResponse> {
    struct { }  _has;
    NSArray * _matchedContacts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *matchedContacts;
@property (nonatomic, readonly) unsigned long long matchedContactsCount;
@property (readonly) Class superclass;

+ (Class)matchedContactsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addMatchedContacts:(id)arg1;
- (void)clearMatchedContacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)matchedContacts;
- (id)matchedContactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchedContactsCount;
- (bool)readFrom:(id)arg1;
- (void)setMatchedContacts:(id)arg1;
- (void)writeTo:(id)arg1;

@end
