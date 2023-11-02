
@interface PRLexiconCorrection : NSObject {
    unsigned long long  _errorType;
    double  _score;
    unsigned int  _tokenID;
}

@property (readonly) unsigned long long errorType;
@property (readonly) double score;
@property (readonly) unsigned int tokenID;

- (id)description;
- (unsigned long long)errorType;
- (id)initWithTokenID:(unsigned int)arg1 score:(double)arg2 errorType:(unsigned long long)arg3;
- (double)score;
- (unsigned int)tokenID;

@end
