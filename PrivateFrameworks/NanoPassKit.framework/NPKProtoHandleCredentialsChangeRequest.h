
@interface NPKProtoHandleCredentialsChangeRequest : PBRequest <NSCopying> {
    NSMutableArray * _credentialsBytes;
    NSString * _passID;
}

@property (nonatomic, retain) NSMutableArray *credentialsBytes;
@property (nonatomic, readonly) bool hasPassID;
@property (nonatomic, retain) NSString *passID;

+ (Class)credentialsBytesType;

- (void).cxx_destruct;
- (void)addCredentialsBytes:(id)arg1;
- (void)clearCredentialsBytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialsBytes;
- (id)credentialsBytesAtIndex:(unsigned long long)arg1;
- (unsigned long long)credentialsBytesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPassID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passID;
- (bool)readFrom:(id)arg1;
- (void)setCredentialsBytes:(id)arg1;
- (void)setPassID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
