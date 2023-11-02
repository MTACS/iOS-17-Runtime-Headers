
@interface PDSProtoTopic : PBCodable <NSCopying> {
    NSMutableArray * _appInfos;
    NSString * _name;
    NSString * _qualifier;
}

@property (nonatomic, retain) NSMutableArray *appInfos;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *qualifier;

+ (Class)appInfoType;

- (void).cxx_destruct;
- (void)addAppInfo:(id)arg1;
- (id)appInfoAtIndex:(unsigned long long)arg1;
- (id)appInfos;
- (unsigned long long)appInfosCount;
- (void)clearAppInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)qualifier;
- (bool)readFrom:(id)arg1;
- (void)setAppInfos:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQualifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
