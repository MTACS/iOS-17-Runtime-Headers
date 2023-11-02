
@interface DSSharingPerson : NSObject {
    CNContact * _contact;
    NSMutableSet * _emailAddresses;
    NSString * _identifier;
    NSMutableSet * _names;
    NSMutableDictionary * _participantsBySource;
    NSMutableSet * _phoneNumbers;
    NSMapTable * _shareDirectionByResource;
    NSMutableDictionary * _shareDirectionBySourceName;
    NSMutableDictionary * _sharedResourcesBySource;
    NSMutableDictionary * _sources;
}

@property (nonatomic, readonly, copy) NSArray *allSources;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly, copy) NSString *displayGivenName;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) UIImage *iconForDetail;
@property (nonatomic, readonly) UIImage *iconForTable;
@property (nonatomic, readonly, copy) NSString *localizedDetail;
@property (nonatomic, readonly) long long score;
@property (nonatomic, readonly, copy) NSArray *sortedSourceNames;

// Image: /System/Library/PrivateFrameworks/DigitalSeparation.framework/DigitalSeparation

+ (void)initialize;

- (void).cxx_destruct;
- (void)addSource:(id)arg1 sharedResource:(id)arg2 participant:(id)arg3 deviceOwnerRole:(long long)arg4;
- (id)allSources;
- (id)contact;
- (id)contactMatchingPredicates:(id)arg1;
- (id)displayGivenName;
- (id)displayName;
- (unsigned long long)hash;
- (id)initWithSource:(id)arg1 sharedResource:(id)arg2 participant:(id)arg3 deviceOwnerRole:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isMe:(id)arg1;
- (id)localizedDetail;
- (void)removeParticipant:(id)arg1 fromSource:(id)arg2;
- (void)removeSource:(id)arg1;
- (long long)score;
- (unsigned long long)shareDirectionForSharedResource:(id)arg1;
- (unsigned long long)shareDirectionForSourceName:(id)arg1;
- (id)sharedResourcesForSourceName:(id)arg1;
- (id)sortedSourceNames;
- (void)stopAllSharingOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)stopSharingSourceNames:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)stopSharingSources:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)updateContactFromParticipant:(id)arg1;
- (void)updateKnownEmailAddressesForParticipant:(id)arg1;
- (void)updateKnownNameForParticipant:(id)arg1;
- (void)updateKnownPhoneNumbersForParticipant:(id)arg1;
- (void)updateShareDirectionForParticipant:(id)arg1 source:(id)arg2 sharedResource:(id)arg3 deviceOwnerRole:(long long)arg4;
- (id)valueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DigitalSeparationUI.framework/DigitalSeparationUI

- (id)iconForDetail;
- (id)iconForTable;
- (id)iconWithSize:(float)arg1;

@end
