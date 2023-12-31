
@interface PKProtobufPaymentSetupRequest : PBRequest <NSCopying> {
    NSString * _appName;
}

@property (nonatomic, retain) NSString *appName;
@property (nonatomic, readonly) bool hasAppName;

- (void).cxx_destruct;
- (id)appName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
