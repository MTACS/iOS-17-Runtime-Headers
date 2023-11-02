
@interface SFSyntheticBookmarkFolder : NSObject {
    WebBookmarkList * _bookmarkList;
    NSString * _title;
}

@property (nonatomic, retain) WebBookmarkList *bookmarkList;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)bookmarkList;
- (id)initWithBookmarkList:(id)arg1 title:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setBookmarkList:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
