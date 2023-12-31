
@interface CRKFetchSafariBookmarksResultObject : CATTaskResultObject {
    NSArray * _bookmarks;
}

@property (nonatomic, copy) NSArray *bookmarks;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bookmarks;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBookmarks:(id)arg1;

@end
