
@interface BBDismissalItem : NSObject {
    NSDate * _expiration;
    unsigned long long  _feeds;
}

@property (nonatomic, readonly) NSDate *expiration;
@property (nonatomic, readonly) unsigned long long feeds;

- (void).cxx_destruct;
- (void)addFeeds:(unsigned long long)arg1;
- (id)description;
- (id)expiration;
- (unsigned long long)feeds;
- (bool)hasExpired;
- (id)initWithFeeds:(unsigned long long)arg1;

@end
