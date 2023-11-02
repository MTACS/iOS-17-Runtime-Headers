
@interface WBChangeRecord : NSObject {
    WebBookmark * _bookmark;
    int  _changeType;
    WebBookmarkCollection * _collection;
    long long  _localRecordGeneration;
}

@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic, readonly) int changeType;
@property (nonatomic, readonly) WebBookmarkCollection *collection;
@property (nonatomic, readonly) long long localRecordGeneration;

- (void).cxx_destruct;
- (id)_changeTypeDescription;
- (id)_changedAttributeDescription;
- (id)bookmark;
- (int)changeType;
- (id)collection;
- (id)description;
- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 changeType:(int)arg3 localRecordGeneration:(long long)arg4;
- (long long)localRecordGeneration;

@end
