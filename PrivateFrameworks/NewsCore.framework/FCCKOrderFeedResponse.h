
@interface FCCKOrderFeedResponse : NSObject {
    unsigned long long  _extent;
    NSString * _feedID;
    NSArray * _feedItemAndArticleRecords;
    bool  _reachedEnd;
    bool  _reachedMinOrder;
    bool  _wasDropped;
}

- (void).cxx_destruct;
- (id)description;

@end
