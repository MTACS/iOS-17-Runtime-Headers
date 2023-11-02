
@interface ACHEarnedInstanceJournalEntry : HDJournalEntry {
    long long  _action;
    ACHEarnedInstance * _earnedInstance;
    long long  _persistentID;
    long long  _provenance;
    bool  _useLegacySyncIdentity;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) ACHEarnedInstance *earnedInstance;
@property (nonatomic, readonly) long long persistentID;
@property (nonatomic, readonly) long long provenance;
@property (nonatomic, readonly) bool useLegacySyncIdentity;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)earnedInstance;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEarnedInstance:(id)arg1 provenance:(long long)arg2 useLegacySyncIdentity:(bool)arg3 action:(long long)arg4;
- (long long)persistentID;
- (long long)provenance;
- (bool)useLegacySyncIdentity;

@end
