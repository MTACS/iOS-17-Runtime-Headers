
@interface FCFDBPruningPolicy : NSObject {
    FCFeedRange * _feedRangeToPrune;
}

@property (nonatomic, readonly, copy) FCFeedRange *feedRangeToPrune;

- (void).cxx_destruct;
- (id)feedRangeToPrune;
- (id)initWithMaxAgeToPersist:(double)arg1;
- (id)initWithMaxOrderToPrune:(unsigned long long)arg1;

@end
