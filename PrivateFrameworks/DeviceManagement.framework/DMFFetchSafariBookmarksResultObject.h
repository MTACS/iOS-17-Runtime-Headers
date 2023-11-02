
@interface DMFFetchSafariBookmarksResultObject : CATTaskResultObject {
    NSArray * _bookmarks;
}

@property (nonatomic, readonly, copy) NSArray *bookmarks;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_appendDescriptionOfBookmark:(id)arg1 toString:(id)arg2 level:(unsigned long long)arg3;
- (id)bookmarks;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBookmarks:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
