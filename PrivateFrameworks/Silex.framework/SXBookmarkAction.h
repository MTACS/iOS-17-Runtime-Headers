
@interface SXBookmarkAction : NSObject <SXAction> {
    <SXBookmark> * _bookmark;
    SXJSONDictionary * analytics;
}

@property (nonatomic, readonly) SXJSONDictionary *analytics;
@property (nonatomic, readonly) <SXBookmark> *bookmark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)analytics;
- (id)bookmark;
- (id)initWithBookmark:(id)arg1;
- (id)type;

@end
