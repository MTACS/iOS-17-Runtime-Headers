
@interface REMListAppearanceContextChangeItem : NSObject {
    REMListChangeItem * _listChangeItem;
}

@property (nonatomic, copy) REMListBadge *badge;
@property (nonatomic, copy) NSString *badgeEmblem;
@property (nonatomic, retain) REMListChangeItem *listChangeItem;

- (void).cxx_destruct;
- (id)badge;
- (id)badgeEmblem;
- (id)initWithListChangeItem:(id)arg1;
- (id)listChangeItem;
- (void)setBadge:(id)arg1;
- (void)setBadgeEmblem:(id)arg1;
- (void)setListChangeItem:(id)arg1;
- (void)setShowingLargeAttachments:(bool)arg1;
- (bool)showingLargeAttachments;

@end
