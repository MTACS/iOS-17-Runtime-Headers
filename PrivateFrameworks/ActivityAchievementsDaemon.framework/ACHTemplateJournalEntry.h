
@interface ACHTemplateJournalEntry : HDJournalEntry {
    long long  _action;
    long long  _provenance;
    ACHTemplate * _template;
    bool  _useLegacySyncIdentity;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic) long long provenance;
@property (nonatomic, readonly) ACHTemplate *template;
@property (nonatomic, readonly) bool useLegacySyncIdentity;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)action;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplate:(id)arg1 provenance:(long long)arg2 useLegacySyncIdentity:(bool)arg3 action:(long long)arg4;
- (long long)provenance;
- (void)setProvenance:(long long)arg1;
- (id)template;
- (bool)useLegacySyncIdentity;

@end
