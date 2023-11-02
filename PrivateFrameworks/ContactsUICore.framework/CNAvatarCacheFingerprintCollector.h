
@interface CNAvatarCacheFingerprintCollector : NSObject <CNChangeHistoryEventVisitor> {
    NSMutableOrderedSet * _fingerprints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *fingerprintsOfAffectedContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)fingerprintsOfAffectedContacts;
- (id)init;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end
