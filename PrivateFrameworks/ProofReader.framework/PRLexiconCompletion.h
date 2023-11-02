
@interface PRLexiconCompletion : NSObject {
    double  _score;
    unsigned int  _tokenID;
}

@property (readonly) double score;
@property (readonly) unsigned int tokenID;

- (id)description;
- (id)initWithTokenID:(unsigned int)arg1 score:(double)arg2;
- (double)score;
- (unsigned int)tokenID;

@end
