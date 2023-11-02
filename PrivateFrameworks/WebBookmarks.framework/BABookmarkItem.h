
@interface BABookmarkItem : NSObject {
    WebBookmark * _bookmark;
    WebBookmarkCollection * _collection;
}

@property (nonatomic, retain) WebBookmark *bookmark;
@property (nonatomic, readonly) WebBookmarkCollection *collection;

- (void).cxx_destruct;
- (id)bookmark;
- (id)collection;
- (id)description;
- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2;
- (void)setBookmark:(id)arg1;

@end
