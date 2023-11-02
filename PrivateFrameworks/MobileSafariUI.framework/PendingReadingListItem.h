
@interface PendingReadingListItem : NSObject {
    WebBookmark * _bookmark;
    <ReadingListMetadataProvider> * _provider;
}

@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic, readonly) <ReadingListMetadataProvider> *provider;

+ (id)itemWithBookmark:(id)arg1 provider:(id)arg2;

- (void).cxx_destruct;
- (id)bookmark;
- (id)provider;

@end
