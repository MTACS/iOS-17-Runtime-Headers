
@interface WDBookmark : WDRun {
    int  mBookmarkType;
    NSString * mName;
}

- (void).cxx_destruct;
- (int)bookmarkType;
- (id)description;
- (id)initWithParagraph:(id)arg1 name:(id)arg2 type:(int)arg3;
- (id)name;
- (int)runType;
- (void)setBookmarkType:(int)arg1;
- (void)setName:(id)arg1;

@end
