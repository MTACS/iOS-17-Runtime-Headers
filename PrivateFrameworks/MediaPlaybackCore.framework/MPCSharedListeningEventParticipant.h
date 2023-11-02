
@interface MPCSharedListeningEventParticipant : NSObject <NSCopying> {
    NSString * _externalIdentifier;
    NSUUID * _sharedListeningIdentifier;
}

@property (nonatomic, readonly, copy) NSString *externalIdentifier;
@property (nonatomic, readonly, copy) NSUUID *sharedListeningIdentifier;

+ (id)participantWithSharedListeningIdentifier:(id)arg1 externalIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)externalIdentifier;
- (id)sharedListeningIdentifier;

@end
