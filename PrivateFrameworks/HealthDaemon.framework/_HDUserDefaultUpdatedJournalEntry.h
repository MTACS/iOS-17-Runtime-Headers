
@interface _HDUserDefaultUpdatedJournalEntry : HDJournalEntry {
    HDUserDefault * _userDefault;
}

@property (nonatomic, readonly) HDUserDefault *userDefault;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)userDefault;

@end
