
@interface NPKProtoFeatureApplicationsForAccountIdentifierResponse : PBCodable <NSCopying> {
    NSMutableArray * _deprecatedFeatureApplications;
    NSMutableArray * _featureApplications;
}

@property (nonatomic, retain) NSMutableArray *deprecatedFeatureApplications;
@property (nonatomic, retain) NSMutableArray *featureApplications;

+ (Class)deprecatedFeatureApplicationsType;
+ (Class)featureApplicationsType;

- (void).cxx_destruct;
- (void)addDeprecatedFeatureApplications:(id)arg1;
- (void)addFeatureApplications:(id)arg1;
- (void)clearDeprecatedFeatureApplications;
- (void)clearFeatureApplications;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deprecatedFeatureApplications;
- (id)deprecatedFeatureApplicationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)deprecatedFeatureApplicationsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureApplications;
- (id)featureApplicationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)featureApplicationsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeprecatedFeatureApplications:(id)arg1;
- (void)setFeatureApplications:(id)arg1;
- (void)writeTo:(id)arg1;

@end
