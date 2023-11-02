
@interface AWDHomeKitCameraConfigurationData : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int isDemoConfiguration : 1; 
    }  _has;
    NSMutableArray * _homeConfigurations;
    bool  _isDemoConfiguration;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasIsDemoConfiguration;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *homeConfigurations;
@property (nonatomic) bool isDemoConfiguration;
@property (nonatomic) unsigned long long timestamp;

+ (Class)homeConfigurationsType;

- (void).cxx_destruct;
- (void)addHomeConfigurations:(id)arg1;
- (void)clearHomeConfigurations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsDemoConfiguration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)homeConfigurations;
- (id)homeConfigurationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)homeConfigurationsCount;
- (bool)isDemoConfiguration;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsDemoConfiguration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHomeConfigurations:(id)arg1;
- (void)setIsDemoConfiguration:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
