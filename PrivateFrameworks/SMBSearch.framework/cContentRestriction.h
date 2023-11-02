
@interface cContentRestriction : NSObject <RestrictionProtocol> {
    unsigned int  _charCount;
    int  _genMethod;
    unsigned int  _lcid;
    NSString * _phraseStr;
    fullPropSpec * _propSpec;
    NSData * _pwcsPhrase;
    int  restrictId;
    unsigned int  ulType;
    unsigned int  weight;
}

@property unsigned int charCount;
@property int genMethod;
@property unsigned int lcid;
@property (retain) NSString *phraseStr;
@property (retain) fullPropSpec *propSpec;
@property (retain) NSData *pwcsPhrase;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (void).cxx_destruct;
- (unsigned int)charCount;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (int)genMethod;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;
- (id)initWithMethod:(int)arg1 Weight:(unsigned int)arg2;
- (unsigned int)lcid;
- (id)phraseStr;
- (id)propSpec;
- (id)pwcsPhrase;
- (int)restrictId;
- (int)restrictionNumber;
- (void)setCharCount:(unsigned int)arg1;
- (void)setGenMethod:(int)arg1;
- (void)setLcid:(unsigned int)arg1;
- (int)setPhrase:(id)arg1;
- (void)setPhraseStr:(id)arg1;
- (void)setPropSpec:(id)arg1;
- (void)setPwcsPhrase:(id)arg1;
- (void)setRestrictId:(int)arg1;
- (void)setUlType:(unsigned int)arg1;
- (void)setWeight:(unsigned int)arg1;
- (unsigned int)ulType;
- (unsigned int)weight;

@end
