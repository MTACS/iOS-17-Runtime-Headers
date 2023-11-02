
@interface SharedChannelActivityResponse : PBCodable <NSCopying> {
    ChannelActivityActivationResponse * _activationResponse;
    ChannelActivityDeactivationResponse * _deactivationResponse;
    struct { 
        unsigned int response : 1; 
    }  _has;
    ChannelActivityPollingResponse * _pollingResponse;
    int  _response;
}

@property (nonatomic, retain) ChannelActivityActivationResponse *activationResponse;
@property (nonatomic, retain) ChannelActivityDeactivationResponse *deactivationResponse;
@property (nonatomic, readonly) bool hasActivationResponse;
@property (nonatomic, readonly) bool hasDeactivationResponse;
@property (nonatomic, readonly) bool hasPollingResponse;
@property (nonatomic) bool hasResponse;
@property (nonatomic, retain) ChannelActivityPollingResponse *pollingResponse;
@property (nonatomic) int response;

- (void).cxx_destruct;
- (int)StringAsResponse:(id)arg1;
- (id)activationResponse;
- (void)clearOneofValuesForResponse;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deactivationResponse;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivationResponse;
- (bool)hasDeactivationResponse;
- (bool)hasPollingResponse;
- (bool)hasResponse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pollingResponse;
- (bool)readFrom:(id)arg1;
- (int)response;
- (id)responseAsString:(int)arg1;
- (void)setActivationResponse:(id)arg1;
- (void)setDeactivationResponse:(id)arg1;
- (void)setHasResponse:(bool)arg1;
- (void)setPollingResponse:(id)arg1;
- (void)setResponse:(int)arg1;
- (void)writeTo:(id)arg1;

@end
