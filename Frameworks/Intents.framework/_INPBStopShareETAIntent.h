
@interface _INPBStopShareETAIntent : PBCodable <NSCopying, NSSecureCoding, _INPBStopShareETAIntent> {
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSArray * _recipients;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, readonly) unsigned long long recipientsCount;
@property (readonly) Class superclass;

+ (Class)recipientType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addRecipient:(id)arg1;
- (void)clearRecipients;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recipientAtIndex:(unsigned long long)arg1;
- (id)recipients;
- (unsigned long long)recipientsCount;
- (void)setIntentMetadata:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)writeTo:(id)arg1;

@end
