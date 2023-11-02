
@interface CKDSystemAvailabilityWatcherWrapper : NSObject {
    <CKDSystemAvailabilityWatcher> * _delegate;
    NSString * _personaID;
    unsigned long long  _savedDelegateHash;
}

@property (nonatomic) <CKDSystemAvailabilityWatcher> *delegate;
@property (nonatomic, copy) NSString *personaID;
@property (nonatomic) unsigned long long savedDelegateHash;

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDelegate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)personaID;
- (void)postSystemAvailabilityChanged:(unsigned long long)arg1;
- (unsigned long long)savedDelegateHash;
- (void)setDelegate:(id)arg1;
- (void)setPersonaID:(id)arg1;
- (void)setSavedDelegateHash:(unsigned long long)arg1;

@end
