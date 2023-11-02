
@interface BMPBNamedHandle : PBCodable <NSCopying> {
    NSString * _contactIdentifier;
    NSString * _handle;
    NSString * _handleType;
    NSString * _name;
}

@property (nonatomic, retain) NSString *contactIdentifier;
@property (nonatomic, retain) NSString *handle;
@property (nonatomic, retain) NSString *handleType;
@property (nonatomic, readonly) bool hasContactIdentifier;
@property (nonatomic, readonly) bool hasHandle;
@property (nonatomic, readonly) bool hasHandleType;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) NSString *name;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handle;
- (id)handleType;
- (bool)hasContactIdentifier;
- (bool)hasHandle;
- (bool)hasHandleType;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setHandleType:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
