
@interface PGKeyCuratorSubcluster : NSObject {
    unsigned long long  _iconicScoreBucket;
    <CLSInvestigationItem> * _keyItem;
    double  _score;
}

@property (readonly) unsigned long long iconicScoreBucket;
@property (readonly) <CLSInvestigationItem> *keyItem;
@property (readonly) double score;

- (void).cxx_destruct;
- (unsigned long long)iconicScoreBucket;
- (id)initWithItems:(id)arg1 keyItem:(id)arg2 score:(double)arg3 iconicScoreBucket:(unsigned long long)arg4;
- (id)keyItem;
- (double)score;

@end
