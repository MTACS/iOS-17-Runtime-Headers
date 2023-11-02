
@interface _MRSetDiscoveryModeProtobufMessage : PBCodable <NSCopying> {
    _MRDiscoverySessionConfigurationProtobuf * _configuration;
    int  _features;
    struct { 
        unsigned int features : 1; 
        unsigned int mode : 1; 
    }  _has;
    int  _mode;
}

@property (nonatomic, retain) _MRDiscoverySessionConfigurationProtobuf *configuration;
@property (nonatomic) int features;
@property (nonatomic, readonly) bool hasConfiguration;
@property (nonatomic) bool hasFeatures;
@property (nonatomic) bool hasMode;
@property (nonatomic) int mode;

- (void).cxx_destruct;
- (int)StringAsFeatures:(id)arg1;
- (int)StringAsMode:(id)arg1;
- (id)configuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)features;
- (id)featuresAsString:(int)arg1;
- (bool)hasConfiguration;
- (bool)hasFeatures;
- (bool)hasMode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)mode;
- (id)modeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setFeatures:(int)arg1;
- (void)setHasFeatures:(bool)arg1;
- (void)setHasMode:(bool)arg1;
- (void)setMode:(int)arg1;
- (void)writeTo:(id)arg1;

@end
