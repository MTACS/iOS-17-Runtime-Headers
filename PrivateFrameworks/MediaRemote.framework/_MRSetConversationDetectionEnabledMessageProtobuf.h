
@interface _MRSetConversationDetectionEnabledMessageProtobuf : PBCodable <NSCopying> {
    bool  _enabled;
    struct { 
        unsigned int enabled : 1; 
    }  _has;
    NSString * _outputDeviceUID;
}

@property (nonatomic) bool enabled;
@property (nonatomic) bool hasEnabled;
@property (nonatomic, readonly) bool hasOutputDeviceUID;
@property (nonatomic, retain) NSString *outputDeviceUID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enabled;
- (bool)hasEnabled;
- (bool)hasOutputDeviceUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputDeviceUID;
- (bool)readFrom:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasEnabled:(bool)arg1;
- (void)setOutputDeviceUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
