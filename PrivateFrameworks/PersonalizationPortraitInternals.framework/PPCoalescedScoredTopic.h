
@interface PPCoalescedScoredTopic : NSObject {
    unsigned short  _occurrencesInSource;
    PPScoredItem * _scoredTopic;
}

@property (nonatomic, readonly) unsigned short occurrencesInSource;
@property (nonatomic, readonly) PPScoredItem *scoredTopic;

- (void).cxx_destruct;
- (id)init;
- (id)initWithScoredTopic:(id)arg1 occurrencesInSource:(unsigned short)arg2;
- (unsigned short)occurrencesInSource;
- (id)scoredTopic;

@end
