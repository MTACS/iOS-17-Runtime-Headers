
@interface SFBookmarkTouchIconRequest : WBSTouchIconRequest {
    WebBookmark * _bookmark;
}

@property (nonatomic, readonly) WebBookmark *bookmark;

+ (id)requestWithBookmark:(id)arg1 iconGenerationEnabled:(bool)arg2;

- (void).cxx_destruct;
- (id)bookmark;
- (id)initWithBookmark:(id)arg1 iconGenerationEnabled:(bool)arg2;
- (bool)isEqual:(id)arg1;

@end
