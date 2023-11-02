
@interface REMReminderHashtagContextChangeItem : NSObject {
    NSMutableSet * _mutableHashtags;
    REMReminderChangeItem * _reminderChangeItem;
}

@property (nonatomic, readonly) NSSet *hashtags;
@property (nonatomic, retain) NSMutableSet *mutableHashtags;
@property (nonatomic, retain) REMReminderChangeItem *reminderChangeItem;

- (void).cxx_destruct;
- (void)addHashtag:(id)arg1;
- (id)addHashtagWithType:(long long)arg1 name:(id)arg2;
- (id)addHashtagWithType:(long long)arg1 name:(id)arg2 creationDate:(id)arg3;
- (void)cancelUndeleteHashtagWithID:(id)arg1;
- (id)hashtags;
- (id)initWithReminderChangeItem:(id)arg1;
- (id)mutableHashtags;
- (id)nameWithDisallowedCharactersReplaced:(id)arg1;
- (id)reminderChangeItem;
- (void)removeAllHashtags;
- (void)removeHashtag:(id)arg1;
- (void)setMutableHashtags:(id)arg1;
- (void)setReminderChangeItem:(id)arg1;
- (void)undeleteHashtagWithID:(id)arg1;

@end
