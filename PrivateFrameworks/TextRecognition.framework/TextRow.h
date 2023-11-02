
@interface TextRow : NSObject <NSCopying> {
    double  _cachedScore;
    NSMutableArray * _mutableTokens;
}

@property double cachedScore;
@property (readonly) NSArray *features;
@property (nonatomic, retain) NSMutableArray *mutableTokens;
@property (readonly) double score;
@property (readonly) NSString *string;
@property (readonly) unsigned long long tokenCount;
@property (nonatomic, readonly, retain) NSArray *tokens;

- (void).cxx_destruct;
- (void)addToken:(id)arg1;
- (double)cachedScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)features;
- (id)init;
- (id)mutableTokens;
- (double)score;
- (void)setCachedScore:(double)arg1;
- (void)setMutableTokens:(id)arg1;
- (id)string;
- (unsigned long long)tokenCount;
- (id)tokens;

@end
