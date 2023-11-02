
@interface EDAMSyncChunk : FATObject {
    NSNumber * _chunkHighUSN;
    NSNumber * _currentTime;
    NSArray * _expungedLinkedAccounts;
    NSArray * _expungedLinkedNotebooks;
    NSArray * _expungedNotebooks;
    NSArray * _expungedNotes;
    NSArray * _expungedSearches;
    NSArray * _expungedTags;
    NSArray * _linkedAccounts;
    NSArray * _linkedNotebooks;
    NSArray * _notebooks;
    NSArray * _notes;
    NSArray * _notesNoLongerSharedWithMe;
    EDAMPreferences * _preferences;
    NSArray * _resources;
    NSArray * _searches;
    NSArray * _tags;
    NSNumber * _updateCount;
}

@property (nonatomic, retain) NSNumber *chunkHighUSN;
@property (nonatomic, retain) NSNumber *currentTime;
@property (nonatomic, retain) NSArray *expungedLinkedAccounts;
@property (nonatomic, retain) NSArray *expungedLinkedNotebooks;
@property (nonatomic, retain) NSArray *expungedNotebooks;
@property (nonatomic, retain) NSArray *expungedNotes;
@property (nonatomic, retain) NSArray *expungedSearches;
@property (nonatomic, retain) NSArray *expungedTags;
@property (nonatomic, retain) NSArray *linkedAccounts;
@property (nonatomic, retain) NSArray *linkedNotebooks;
@property (nonatomic, retain) NSArray *notebooks;
@property (nonatomic, retain) NSArray *notes;
@property (nonatomic, retain) NSArray *notesNoLongerSharedWithMe;
@property (nonatomic, retain) EDAMPreferences *preferences;
@property (nonatomic, retain) NSArray *resources;
@property (nonatomic, retain) NSArray *searches;
@property (nonatomic, retain) NSArray *tags;
@property (nonatomic, retain) NSNumber *updateCount;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)chunkHighUSN;
- (id)currentTime;
- (id)expungedLinkedAccounts;
- (id)expungedLinkedNotebooks;
- (id)expungedNotebooks;
- (id)expungedNotes;
- (id)expungedSearches;
- (id)expungedTags;
- (id)linkedAccounts;
- (id)linkedNotebooks;
- (id)notebooks;
- (id)notes;
- (id)notesNoLongerSharedWithMe;
- (id)preferences;
- (id)resources;
- (id)searches;
- (void)setChunkHighUSN:(id)arg1;
- (void)setCurrentTime:(id)arg1;
- (void)setExpungedLinkedAccounts:(id)arg1;
- (void)setExpungedLinkedNotebooks:(id)arg1;
- (void)setExpungedNotebooks:(id)arg1;
- (void)setExpungedNotes:(id)arg1;
- (void)setExpungedSearches:(id)arg1;
- (void)setExpungedTags:(id)arg1;
- (void)setLinkedAccounts:(id)arg1;
- (void)setLinkedNotebooks:(id)arg1;
- (void)setNotebooks:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setNotesNoLongerSharedWithMe:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setSearches:(id)arg1;
- (void)setTags:(id)arg1;
- (void)setUpdateCount:(id)arg1;
- (id)tags;
- (id)updateCount;

@end
