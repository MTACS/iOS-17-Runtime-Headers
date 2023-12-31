
@interface BBDismissalSyncBulletinMatch : NSObject {
    NSString * _dismissalID;
    BBDismissalItem * _dismissalItem;
    unsigned long long  _feeds;
    NSString * _sectionID;
}

@property (nonatomic, copy) NSString *dismissalID;
@property (nonatomic, retain) BBDismissalItem *dismissalItem;
@property (nonatomic) unsigned long long feeds;
@property (nonatomic, copy) NSString *sectionID;

- (void).cxx_destruct;
- (id)description;
- (id)dismissalID;
- (id)dismissalItem;
- (unsigned long long)feeds;
- (id)initWithDismissalDictionaryItem:(id)arg1;
- (id)initWithDismissalID:(id)arg1 andItem:(id)arg2;
- (id)sectionID;
- (void)setDismissalID:(id)arg1;
- (void)setDismissalItem:(id)arg1;
- (void)setFeeds:(unsigned long long)arg1;
- (void)setSectionID:(id)arg1;

@end
