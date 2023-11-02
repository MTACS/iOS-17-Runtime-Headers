
@interface MPNowPlayingParticipantItem : NSObject {
    MRContentItem * _mediaRemoteContentItem;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) MRContentItem *mediaRemoteContentItem;
@property (nonatomic, readonly) MRUserIdentity *mediaRemoteUserIdentity;
@property (nonatomic, copy) NSString *participantIdentifier;
@property (nonatomic) long long participantIdentifierType;

- (void).cxx_destruct;
- (void)_postParticipantItemChangedNotificationWithDeltaBlock:(id /* block */)arg1;
- (id)displayName;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 mediaRemoteUserIdentity:(id)arg2;
- (id)initWithMediaRemoteContentItem:(id)arg1;
- (id)initWithMediaRemoteUserIdentity:(id)arg1;
- (id)mediaRemoteContentItem;
- (id)mediaRemoteUserIdentity;
- (id)participantIdentifier;
- (long long)participantIdentifierType;
- (void)setDisplayName:(id)arg1;
- (void)setParticipantIdentifier:(id)arg1;
- (void)setParticipantIdentifierType:(long long)arg1;

@end
