
@interface SECSFAActionTapToRadar : PBCodable <NSCopying> {
    NSString * _alert;
    NSString * _componentID;
    NSString * _componentName;
    NSString * _componentVersion;
    NSString * _radarDescription;
}

@property (nonatomic, retain) NSString *alert;
@property (nonatomic, retain) NSString *componentID;
@property (nonatomic, retain) NSString *componentName;
@property (nonatomic, retain) NSString *componentVersion;
@property (nonatomic, readonly) bool hasAlert;
@property (nonatomic, readonly) bool hasComponentID;
@property (nonatomic, readonly) bool hasComponentName;
@property (nonatomic, readonly) bool hasComponentVersion;
@property (nonatomic, readonly) bool hasRadarDescription;
@property (nonatomic, retain) NSString *radarDescription;

- (void).cxx_destruct;
- (id)alert;
- (id)componentID;
- (id)componentName;
- (id)componentVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlert;
- (bool)hasComponentID;
- (bool)hasComponentName;
- (bool)hasComponentVersion;
- (bool)hasRadarDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)radarDescription;
- (bool)readFrom:(id)arg1;
- (void)setAlert:(id)arg1;
- (void)setComponentID:(id)arg1;
- (void)setComponentName:(id)arg1;
- (void)setComponentVersion:(id)arg1;
- (void)setRadarDescription:(id)arg1;
- (void)writeTo:(id)arg1;

@end
