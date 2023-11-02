
@interface CKDateFormatterHelper : NSObject {
    NSCache * _dateFormatterContainer;
    NSArray * _lockList;
}

@property (retain) NSCache *dateFormatterContainer;
@property (retain) NSArray *lockList;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createDateFormatterFor:(long long)arg1;
- (id)_createRelativeStandaloneDateFormatter;
- (id)_createShortDateNoTimeInSentenceDateFormatter;
- (id)_keyForDateFormatterType:(long long)arg1;
- (id)_templateStringForFormatterType:(long long)arg1;
- (id)dateFormatterContainer;
- (id)getDateFormatterFor:(long long)arg1;
- (id)init;
- (id)lockList;
- (void)removeAllObjects;
- (void)setDateFormatterContainer:(id)arg1;
- (void)setLockList:(id)arg1;

@end
