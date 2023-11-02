
@interface NLDataEnumerator : NSObject {
    NLDataProvider * _dataProvider;
    NLNumberGenerator * _generator;
    unsigned long long  _idx;
    NSMutableData * _shuffleData;
}

@property (readonly, retain) NLDataProvider *dataProvider;
@property (readonly) unsigned long long index;

- (void).cxx_destruct;
- (id)dataProvider;
- (unsigned long long)index;
- (id)initWithDataProvider:(id)arg1;
- (id)initWithDataProvider:(id)arg1 numberGenerator:(id)arg2;
- (id)instanceAtIndex:(unsigned long long)arg1;
- (id)nextInstance;
- (void)rewind;
- (void)rewindAndShuffle:(bool)arg1;
- (void)shuffle;

@end
