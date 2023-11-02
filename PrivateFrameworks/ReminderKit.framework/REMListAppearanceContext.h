
@interface REMListAppearanceContext : NSObject {
    REMList * _list;
}

@property (nonatomic, readonly) REMListBadge *badge;
@property (nonatomic, readonly) NSString *badgeEmblem;
@property (nonatomic, retain) REMList *list;

- (void).cxx_destruct;
- (id)badge;
- (id)badgeEmblem;
- (id)initWithList:(id)arg1;
- (id)list;
- (void)setList:(id)arg1;
- (bool)showingLargeAttachments;

@end
