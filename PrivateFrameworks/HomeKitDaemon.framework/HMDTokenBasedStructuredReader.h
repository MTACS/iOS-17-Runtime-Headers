
@interface HMDTokenBasedStructuredReader : HMDStructuredReader {
    struct _HMDStructuredDataToken { 
        long long type; 
        id value; 
    }  _token;
}

- (void).cxx_destruct;
- (unsigned long long)beginArray;
- (unsigned long long)beginDictionary;
- (void)endArray;
- (void)endDictionary;
- (id)error;
- (void)failWithError:(id)arg1;
- (struct _HMDStructuredDataToken { long long x1; id x2; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x1; id x2; }*)arg1;
- (bool)readBoolean;
- (id)readData;
- (id)readDate;
- (id)readDictionaryKey;
- (void)readNull;
- (id)readNumber;
- (id)readString;
- (struct _HMDStructuredDataToken { long long x1; id x2; })readToken;
- (id)readUUID;
- (void)skipToken;
- (long long)tokenType;

@end
