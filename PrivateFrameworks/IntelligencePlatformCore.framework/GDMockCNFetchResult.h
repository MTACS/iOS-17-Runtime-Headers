
@interface GDMockCNFetchResult : NSObject {
    NSData * _currentHistoryToken;
    id  _value;
}

@property (nonatomic, readonly, copy) NSData *currentHistoryToken;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)currentHistoryToken;
- (id)fetchResult;
- (id)initWithValue:(id)arg1 currentHistoryToken:(id)arg2;
- (id)value;

@end
