
@interface FCCKFeedResponse : NSObject {
    NSData * _cursor;
    unsigned long long  _extent;
    NSString * _feedID;
    NSArray * _feedItemAndArticleRecords;
    bool  _reachedEnd;
    bool  _reachedOrderLimit;
    bool  _wasDropped;
}

- (void).cxx_destruct;
- (id)description;

@end
