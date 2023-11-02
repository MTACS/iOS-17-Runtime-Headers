
@interface TokenizerOutputObjc : NSObject {
    NSData * _tokenIds;
    NSData * _tokenRanges;
    NSData * _wordIndexes;
}

@property (nonatomic, readonly) NSData *tokenIds;
@property (nonatomic, readonly) NSData *tokenRanges;
@property (nonatomic, readonly) NSData *wordIndexes;

- (void).cxx_destruct;
- (id)initWithTokenIds:(id)arg1 tokenRanges:(id)arg2 wordIndexes:(id)arg3;
- (id)tokenIds;
- (id)tokenRanges;
- (id)wordIndexes;

@end
