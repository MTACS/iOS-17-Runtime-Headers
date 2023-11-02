
@interface WFREPBRequest : PBRequest <NSCopying> {
    NSString * _identifier;
    NSData * _message;
    int  _version;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSData *message;
@property (nonatomic) int version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (bool)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setVersion:(int)arg1;
- (int)version;
- (void)writeTo:(id)arg1;

@end
