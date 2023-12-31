
@interface WBBookmarksDatabaseHealthInformation : NSObject {
    unsigned long long  _allDuplicateBookmarksCount;
    unsigned long long  _topLevelDuplicateBookmarksCount;
}

@property (nonatomic, readonly) unsigned long long allDuplicateBookmarksCount;
@property (nonatomic, readonly) unsigned long long topLevelDuplicateBookmarksCount;

- (unsigned long long)allDuplicateBookmarksCount;
- (id)initWithTopLevelDuplicateBookmarksCount:(unsigned long long)arg1 allDuplicateBookmarksCount:(unsigned long long)arg2;
- (unsigned long long)topLevelDuplicateBookmarksCount;

@end
