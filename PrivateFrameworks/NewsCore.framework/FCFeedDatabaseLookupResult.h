
@interface FCFeedDatabaseLookupResult : NSObject {
    NSData * _ckFromCursor;
    unsigned long long  _ckFromOrder;
    unsigned long long  _ckToOrder;
    bool  _exhaustedRange;
    NSArray * _feedItems;
    FCFeedRange * _feedRange;
    id  _insertionToken;
}

- (void).cxx_destruct;
- (id)description;

@end
