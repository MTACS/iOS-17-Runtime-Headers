
@interface _MRAdjustVolumeMessageProtobuf : PBCodable <NSCopying> {
    int  _adjustment;
    _MRRequestDetailsProtobuf * _details;
    struct { 
        unsigned int adjustment : 1; 
    }  _has;
    NSString * _outputDeviceUID;
}

@property (nonatomic) int adjustment;
@property (nonatomic, retain) _MRRequestDetailsProtobuf *details;
@property (nonatomic) bool hasAdjustment;
@property (nonatomic, readonly) bool hasDetails;
@property (nonatomic, readonly) bool hasOutputDeviceUID;
@property (nonatomic, retain) NSString *outputDeviceUID;

- (void).cxx_destruct;
- (int)StringAsAdjustment:(id)arg1;
- (int)adjustment;
- (id)adjustmentAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)details;
- (id)dictionaryRepresentation;
- (bool)hasAdjustment;
- (bool)hasDetails;
- (bool)hasOutputDeviceUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputDeviceUID;
- (bool)readFrom:(id)arg1;
- (void)setAdjustment:(int)arg1;
- (void)setDetails:(id)arg1;
- (void)setHasAdjustment:(bool)arg1;
- (void)setOutputDeviceUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
