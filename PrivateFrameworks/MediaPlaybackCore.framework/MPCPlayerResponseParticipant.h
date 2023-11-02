
@interface MPCPlayerResponseParticipant : NSObject <NSObject> {
    NSString * _contentItemIdentifier;
    NSString * _displayName;
    NSString * _identifier;
    long long  _identifierType;
    MPModelSharedListeningParticipant * _modelObject;
    MPCPlayerResponse * _response;
}

@property (nonatomic, readonly) NSString *contentItemIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long identifierType;
@property (nonatomic, readonly) MPModelSharedListeningParticipant *modelObject;
@property (nonatomic, readonly) MPCPlayerResponse *response;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_stateDumpObject;
- (id)contentItemIdentifier;
- (id)description;
- (id)displayName;
- (id)identifier;
- (long long)identifierType;
- (id)initWithContentItemIdentifier:(id)arg1 identifierType:(long long)arg2 identifier:(id)arg3 displayName:(id)arg4 response:(id)arg5;
- (id)modelObject;
- (id)response;

@end
