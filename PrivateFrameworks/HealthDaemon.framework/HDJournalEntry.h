
@interface HDJournalEntry : NSObject <HDJournalChapterEntry, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *entryClassName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long size;
@property (readonly) Class superclass;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)deserializedEntryWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entryClassName;
- (id)initWithCoder:(id)arg1;
- (long long)size;

@end
