
@interface TIContactCollection : NSObject {
    NSMutableArray * _contacts;
    long long  _count;
    bool  _sourceHasRelevancyScore;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) bool sourceHasRelevancyScore;

- (void).cxx_destruct;
- (void)addContact:(id)arg1;
- (long long)count;
- (void)enumerateContactsUsingBlock:(id /* block */)arg1;
- (id)initWithRelevanceScoreType:(bool)arg1;
- (bool)sourceHasRelevancyScore;

@end
