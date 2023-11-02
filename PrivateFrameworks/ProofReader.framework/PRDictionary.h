
@interface PRDictionary : NSObject {
    NSData * _data;
    NSDictionary * _dictionariesDictionary;
    PRDictionary * _fallbackDictionary;
    NSDictionary * _numEntriesDictionary;
    NSDictionary * _offsetsDictionary;
    NLParameterBundle * _parameterBundle;
    NLParameterBundle * _transformerParameterBundle;
    NSURL * _url;
}

- (bool)checkWordBuffer:(char *)arg1 length:(unsigned long long)arg2 encoding:(unsigned int)arg3 index:(unsigned long long)arg4 caseInsensitive:(bool)arg5;
- (void)dealloc;
- (id)description;
- (id)dictionaryAtIndex:(unsigned long long)arg1;
- (id)fallbackDictionary;
- (id)initWithURL:(id)arg1 fallbackURL:(id)arg2;
- (id)parameterBundle;
- (id)transformerParameterBundle;

@end
