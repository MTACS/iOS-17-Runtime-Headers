
@interface ContinuousReadingItem : NSObject {
    WebBookmark * _readingListBookmark;
}

@property (nonatomic, readonly, retain) NSURL *URL;
@property (nonatomic, readonly, copy) NSString *previewText;
@property (setter=_setReadingListBookmark:, nonatomic, retain) WebBookmark *readingListBookmark;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)itemWithReadingListItem:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithReadingListItem:(id)arg1;
- (void)_readingListItemDidUpdate:(id)arg1;
- (void)_setReadingListBookmark:(id)arg1;
- (id)_siteNameForReadingListItem;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)previewText;
- (id)readingListBookmark;
- (id)subtitle;
- (id)title;

@end
