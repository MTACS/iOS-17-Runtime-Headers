
@interface BMPBNowPlayingOutputDevice : PBCodable <NSCopying> {
    struct { 
        unsigned int outputDeviceSubType : 1; 
        unsigned int outputDeviceType : 1; 
    }  _has;
    NSString * _outputDeviceId;
    int  _outputDeviceSubType;
    int  _outputDeviceType;
}

@property (nonatomic, readonly) bool hasOutputDeviceId;
@property (nonatomic) bool hasOutputDeviceSubType;
@property (nonatomic) bool hasOutputDeviceType;
@property (nonatomic, retain) NSString *outputDeviceId;
@property (nonatomic) int outputDeviceSubType;
@property (nonatomic) int outputDeviceType;

- (void).cxx_destruct;
- (int)StringAsOutputDeviceSubType:(id)arg1;
- (int)StringAsOutputDeviceType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOutputDeviceId;
- (bool)hasOutputDeviceSubType;
- (bool)hasOutputDeviceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputDeviceId;
- (int)outputDeviceSubType;
- (id)outputDeviceSubTypeAsString:(int)arg1;
- (int)outputDeviceType;
- (id)outputDeviceTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasOutputDeviceSubType:(bool)arg1;
- (void)setHasOutputDeviceType:(bool)arg1;
- (void)setOutputDeviceId:(id)arg1;
- (void)setOutputDeviceSubType:(int)arg1;
- (void)setOutputDeviceType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
