
@interface HMDRemoteEventRouterProtoMessage : PBCodable <NSCopying> {
    HMDRemoteEventRouterProtoChangeRegistrationsMessage * _changeRegistrations;
    HMDRemoteEventRouterProtoConnectMessage * _connect;
    HMDRemoteEventRouterProtoDisconnectMessage * _disconnect;
    HMDRemoteEventRouterProtoFetchEventsMessage * _fetchEvents;
    struct { 
        unsigned int request : 1; 
    }  _has;
    NSString * _identifier;
    HMDRemoteEventRouterProtoKeepAliveMessage * _keepAlive;
    int  _request;
}

@property (nonatomic, retain) HMDRemoteEventRouterProtoChangeRegistrationsMessage *changeRegistrations;
@property (nonatomic, retain) HMDRemoteEventRouterProtoConnectMessage *connect;
@property (nonatomic, retain) HMDRemoteEventRouterProtoDisconnectMessage *disconnect;
@property (nonatomic, retain) HMDRemoteEventRouterProtoFetchEventsMessage *fetchEvents;
@property (nonatomic, readonly) bool hasChangeRegistrations;
@property (nonatomic, readonly) bool hasConnect;
@property (nonatomic, readonly) bool hasDisconnect;
@property (nonatomic, readonly) bool hasFetchEvents;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasKeepAlive;
@property (nonatomic) bool hasRequest;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) HMDRemoteEventRouterProtoKeepAliveMessage *keepAlive;
@property (nonatomic) int request;

- (void).cxx_destruct;
- (int)StringAsRequest:(id)arg1;
- (id)changeRegistrations;
- (void)clearOneofValuesForRequest;
- (id)connect;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disconnect;
- (id)fetchEvents;
- (bool)hasChangeRegistrations;
- (bool)hasConnect;
- (bool)hasDisconnect;
- (bool)hasFetchEvents;
- (bool)hasIdentifier;
- (bool)hasKeepAlive;
- (bool)hasRequest;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)keepAlive;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)request;
- (id)requestAsString:(int)arg1;
- (void)setChangeRegistrations:(id)arg1;
- (void)setConnect:(id)arg1;
- (void)setDisconnect:(id)arg1;
- (void)setFetchEvents:(id)arg1;
- (void)setHasRequest:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeepAlive:(id)arg1;
- (void)setRequest:(int)arg1;
- (void)writeTo:(id)arg1;

@end
