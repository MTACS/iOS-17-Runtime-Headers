
@interface PersonLinkingPerson : PBCodable <NSCopying> {
    NSMutableArray * _emails;
    NSString * _name;
}

@property (nonatomic, retain) NSMutableArray *emails;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSString *name;

+ (Class)emailsType;

- (void).cxx_destruct;
- (void)addEmails:(id)arg1;
- (void)clearEmails;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)emails;
- (id)emailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)emailsCount;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setEmails:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
