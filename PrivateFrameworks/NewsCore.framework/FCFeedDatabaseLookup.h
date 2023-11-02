
@interface FCFeedDatabaseLookup : NSObject {
    bool  _cachedOnly;
    NSString * _feedID;
    FCFeedRange * _feedRange;
    unsigned long long  _maxCount;
    FCFeedItemFeature * _requiredFeature;
}

- (void).cxx_destruct;
- (id)description;

@end
