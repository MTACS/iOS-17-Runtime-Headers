
@interface AWDProactiveModelFittingModelInfo : PBCodable <NSCopying> {
    NSString * _locale;
    NSString * _name;
    NSString * _version;
}

@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *version;

+ (id)modelInfoFromPlanId:(id)arg1;
+ (id)modelInfoFromSessionDescriptor:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocale;
- (bool)hasName;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setName:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

@end
