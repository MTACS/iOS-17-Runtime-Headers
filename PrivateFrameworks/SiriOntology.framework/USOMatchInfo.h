
@interface USOMatchInfo : NSObject <NSSecureCoding> {
    NSNumber * _editDistance;
    NSNumber * _matchScore;
    unsigned int  _matchSignalBitSet;
    NSNumber * _matchedAliasCount;
    NSMutableArray * _matchedAliasTypes;
    NSNumber * _matchedStopWordCount;
    NSNumber * _matchedTokenCount;
    NSNumber * _maxAliasCount;
    NSNumber * _maxStopWordCount;
    NSNumber * _maxTokenCount;
}

@property (nonatomic, retain) NSNumber *editDistance;
@property (nonatomic, retain) NSNumber *matchScore;
@property unsigned int matchSignalBitSet;
@property (nonatomic, retain) NSNumber *matchedAliasCount;
@property (nonatomic, retain) NSMutableArray *matchedAliasTypes;
@property (nonatomic, retain) NSNumber *matchedStopWordCount;
@property (nonatomic, retain) NSNumber *matchedTokenCount;
@property (nonatomic, retain) NSNumber *maxAliasCount;
@property (nonatomic, retain) NSNumber *maxStopWordCount;
@property (nonatomic, retain) NSNumber *maxTokenCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAliasType:(unsigned int)arg1;
- (id)editDistance;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchSignalBitSet:(unsigned int)arg1;
- (id)initWithMatchSignalBitSet:(unsigned int)arg1 matchScore:(float)arg2 maxTokenCount:(unsigned int)arg3 matchedTokenCount:(unsigned int)arg4 maxStopWordCount:(unsigned int)arg5 matchedStopWordCount:(unsigned int)arg6 editDistance:(unsigned int)arg7 maxAliasCount:(unsigned int)arg8 matchedAliasCount:(unsigned int)arg9 matchedAliasTypes:(id)arg10;
- (id)matchScore;
- (unsigned int)matchSignalBitSet;
- (id)matchedAliasCount;
- (id)matchedAliasTypes;
- (id)matchedStopWordCount;
- (id)matchedTokenCount;
- (id)maxAliasCount;
- (id)maxStopWordCount;
- (id)maxTokenCount;
- (void)setEditDistance:(id)arg1;
- (void)setMatchScore:(id)arg1;
- (void)setMatchSignalBitSet:(unsigned int)arg1;
- (void)setMatchedAliasCount:(id)arg1;
- (void)setMatchedAliasTypes:(id)arg1;
- (void)setMatchedStopWordCount:(id)arg1;
- (void)setMatchedTokenCount:(id)arg1;
- (void)setMaxAliasCount:(id)arg1;
- (void)setMaxStopWordCount:(id)arg1;
- (void)setMaxTokenCount:(id)arg1;

@end
