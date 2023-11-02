
@interface SharedChannelActivityRequest : PBRequest <NSCopying> {
    ChannelActivityActivationRequest * _activationRequest;
    ChannelActivityDeactivationRequest * _deactivationRequest;
    struct { 
        unsigned int request : 1; 
    }  _has;
    ChannelActivityPollingRequest * _pollingRequest;
    int  _request;
}

@property (nonatomic, retain) ChannelActivityActivationRequest *activationRequest;
@property (nonatomic, retain) ChannelActivityDeactivationRequest *deactivationRequest;
@property (nonatomic, readonly) bool hasActivationRequest;
@property (nonatomic, readonly) bool hasDeactivationRequest;
@property (nonatomic, readonly) bool hasPollingRequest;
@property (nonatomic) bool hasRequest;
@property (nonatomic, retain) ChannelActivityPollingRequest *pollingRequest;
@property (nonatomic) int request;

- (void).cxx_destruct;
- (int)StringAsRequest:(id)arg1;
- (id)activationRequest;
- (void)clearOneofValuesForRequest;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deactivationRequest;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivationRequest;
- (bool)hasDeactivationRequest;
- (bool)hasPollingRequest;
- (bool)hasRequest;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pollingRequest;
- (bool)readFrom:(id)arg1;
- (int)request;
- (id)requestAsString:(int)arg1;
- (void)setActivationRequest:(id)arg1;
- (void)setDeactivationRequest:(id)arg1;
- (void)setHasRequest:(bool)arg1;
- (void)setPollingRequest:(id)arg1;
- (void)setRequest:(int)arg1;
- (void)writeTo:(id)arg1;

@end
