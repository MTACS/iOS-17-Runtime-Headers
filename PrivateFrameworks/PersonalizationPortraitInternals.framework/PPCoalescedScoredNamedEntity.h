
@interface PPCoalescedScoredNamedEntity : NSObject {
    unsigned short  _occurrencesInSource;
    PPScoredItem * _scoredNamedEntity;
}

@property (nonatomic, readonly) unsigned short occurrencesInSource;
@property (nonatomic, readonly) PPScoredItem *scoredNamedEntity;

- (void).cxx_destruct;
- (id)init;
- (id)initWithScoredNamedEntity:(id)arg1 occurrencesInSource:(unsigned short)arg2;
- (unsigned short)occurrencesInSource;
- (id)scoredNamedEntity;

@end
