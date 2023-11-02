
@interface HMDRemoteEventRouterProtoServerMessage : PBCodable <NSCopying> {
    HMDRemoteEventRouterProtoChangeRegistrationsResponse * _changeRegistrationsResponse;
    HMDRemoteEventRouterProtoConnectResponse * _connectResponse;
    struct { 
        unsigned int message : 1; 
    }  _has;
    NSString * _identifier;
    int  _message;
    HMDRemoteEventRouterProtoEventsMessage * _updatedEvents;
}

@property (nonatomic, retain) HMDRemoteEventRouterProtoChangeRegistrationsResponse *changeRegistrationsResponse;
@property (nonatomic, retain) HMDRemoteEventRouterProtoConnectResponse *connectResponse;
@property (nonatomic, readonly) bool hasChangeRegistrationsResponse;
@property (nonatomic, readonly) bool hasConnectResponse;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasMessage;
@property (nonatomic, readonly) bool hasUpdatedEvents;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) int message;
@property (nonatomic, retain) HMDRemoteEventRouterProtoEventsMessage *updatedEvents;

- (void).cxx_destruct;
- (int)StringAsMessage:(id)arg1;
- (id)changeRegistrationsResponse;
- (void)clearOneofValuesForMessage;
- (id)connectResponse;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChangeRegistrationsResponse;
- (bool)hasConnectResponse;
- (bool)hasIdentifier;
- (bool)hasMessage;
- (bool)hasUpdatedEvents;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)message;
- (id)messageAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChangeRegistrationsResponse:(id)arg1;
- (void)setConnectResponse:(id)arg1;
- (void)setHasMessage:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessage:(int)arg1;
- (void)setUpdatedEvents:(id)arg1;
- (id)updatedEvents;
- (void)writeTo:(id)arg1;

@end
