
@interface SGMatchedDetailsReader : NSObject {
    long long  _arrayCount;
    long long  _columnCount;
    NSData * _matchDetails;
    long long  _phraseCount;
    unsigned int * _phraseMatches;
}

@property (nonatomic, readonly) long long columnCount;
@property (nonatomic, readonly) long long phraseCount;

- (void).cxx_destruct;
- (long long)columnCount;
- (id)initWithMatchedDetails:(id)arg1;
- (bool)matchAtPhraseIndex:(long long)arg1 columnIndex:(long long)arg2;
- (long long)phraseCount;

@end
