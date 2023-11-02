
@interface FCCKFeedRequest : NSObject {
    NSString * _feedID;
    unsigned long long  _hardResultsLimit;
    unsigned long long  _orderLimit;
    unsigned long long  _softResultsLimit;
    NSData * _startCursor;
    unsigned long long  _startOrder;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
