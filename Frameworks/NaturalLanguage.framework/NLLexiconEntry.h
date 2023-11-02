
@interface NLLexiconEntry : NSObject {
    unsigned long long  _flags;
    double  _probability;
    NSString * _string;
    unsigned int  _tokenID;
}

@property (readonly) unsigned long long flags;
@property (readonly) double probability;
@property (readonly, copy) NSString *string;

+ (id)entryWithString:(id)arg1 tokenID:(unsigned int)arg2 flags:(unsigned long long)arg3 probability:(double)arg4;

- (void).cxx_destruct;
- (unsigned long long)flags;
- (id)initWithString:(id)arg1 tokenID:(unsigned int)arg2 flags:(unsigned long long)arg3 probability:(double)arg4;
- (double)probability;
- (id)probabilityInfo;
- (id)string;
- (unsigned int)tokenID;

@end
