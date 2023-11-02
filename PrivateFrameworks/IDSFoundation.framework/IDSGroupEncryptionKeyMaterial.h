
@interface IDSGroupEncryptionKeyMaterial : NSObject <NSCopying> {
    NSDate * _createdAt;
    NSMutableSet * _devicesToBeSent;
    unsigned int  _generationCounter;
    NSString * _groupID;
    bool  _isGeneratedLocally;
    bool  _isSentToClient;
    NSUUID * _keyIndex;
    NSData * _keyMaterial;
    NSData * _keySalt;
    unsigned long long  _participantID;
    int  _ratchetIndex;
}

@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic) unsigned int generationCounter;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic) bool isGeneratedLocally;
@property (nonatomic) bool isSentToClient;
@property (nonatomic, readonly) NSUUID *keyIndex;
@property (nonatomic, readonly) NSData *keyMaterial;
@property (nonatomic, readonly) NSData *keySalt;
@property (nonatomic) unsigned long long participantID;
@property (nonatomic) int ratchetIndex;

+ (id)keyOriginIdentifier;
+ (unsigned int)locallyGeneratedKeysCounter;
+ (void)setLocallyGeneratedKeysCounter:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)changeCreatedAt:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdAt;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)generationCounter;
- (id)groupID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIndex:(id)arg1 groupID:(id)arg2 participantID:(unsigned long long)arg3;
- (id)initWithKeyMaterial:(id)arg1 keySalt:(id)arg2 keyIndex:(id)arg3 groupID:(id)arg4;
- (id)initWithKeyMaterial:(id)arg1 keySalt:(id)arg2 keyIndex:(id)arg3 groupID:(id)arg4 generationCounter:(unsigned int)arg5 participantID:(unsigned long long)arg6;
- (id)initWithKeyMaterial:(id)arg1 keySalt:(id)arg2 keyIndex:(id)arg3 groupID:(id)arg4 isGeneratedLocally:(bool)arg5 createdAt:(id)arg6 generationCounter:(unsigned int)arg7 participantID:(unsigned long long)arg8;
- (id)initWithKeyMaterial:(id)arg1 keySalt:(id)arg2 keyIndex:(id)arg3 groupID:(id)arg4 participantID:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRealTimeEncryptionKeyMaterial:(id)arg1;
- (bool)isGeneratedLocally;
- (bool)isSentToClient;
- (id)keyIndex;
- (id)keyMaterial;
- (id)keySalt;
- (unsigned long long)participantID;
- (int)ratchetIndex;
- (void)removeDeviceFromSentToDevice:(id)arg1;
- (void)sentToDevice:(id)arg1;
- (void)setGenerationCounter:(unsigned int)arg1;
- (void)setIsGeneratedLocally:(bool)arg1;
- (void)setIsSentToClient:(bool)arg1;
- (void)setParticipantID:(unsigned long long)arg1;
- (void)setRatchetIndex:(int)arg1;

@end
