
@interface _MRUpdateActiveSystemEndpointRequestProtobuf : PBCodable <NSCopying> {
    int  _changeType;
    struct { 
        unsigned int type : 1; 
        unsigned int changeType : 1; 
        unsigned int pairedDeviceSync : 1; 
    }  _has;
    NSString * _outputDeviceUID;
    bool  _pairedDeviceSync;
    NSString * _reason;
    unsigned long long  _type;
}

@property (nonatomic) int changeType;
@property (nonatomic) bool hasChangeType;
@property (nonatomic, readonly) bool hasOutputDeviceUID;
@property (nonatomic) bool hasPairedDeviceSync;
@property (nonatomic, readonly) bool hasReason;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *outputDeviceUID;
@property (nonatomic) bool pairedDeviceSync;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)arg1;
- (int)changeType;
- (id)changeTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChangeType;
- (bool)hasOutputDeviceUID;
- (bool)hasPairedDeviceSync;
- (bool)hasReason;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputDeviceUID;
- (bool)pairedDeviceSync;
- (bool)readFrom:(id)arg1;
- (id)reason;
- (void)setChangeType:(int)arg1;
- (void)setHasChangeType:(bool)arg1;
- (void)setHasPairedDeviceSync:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setOutputDeviceUID:(id)arg1;
- (void)setPairedDeviceSync:(bool)arg1;
- (void)setReason:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;
- (void)writeTo:(id)arg1;

@end
