
@interface WMBookmarkMapper : CMMapper {
    int  mBookmarkType;
    NSString * mName;
}

- (void).cxx_destruct;
- (id)initWithWDBookmark:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
