
@interface NNMKProtoVIPSender : PBCodable <NSCopying> {
    NSString * _displayName;
    NSMutableArray * _emailAddresses;
    NSString * _name;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSMutableArray *emailAddresses;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSString *name;

+ (Class)emailAddressesType;
+ (id)protoVIP:(id)arg1;

- (void).cxx_destruct;
- (void)addEmailAddresses:(id)arg1;
- (void)clearEmailAddresses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)emailAddresses;
- (id)emailAddressesAtIndex:(unsigned long long)arg1;
- (unsigned long long)emailAddressesCount;
- (bool)hasDisplayName;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setName:(id)arg1;
- (id)vipSender;
- (void)writeTo:(id)arg1;

@end
