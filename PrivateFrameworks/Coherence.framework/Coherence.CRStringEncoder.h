
@interface Coherence.CRStringEncoder : NSObject {
    void encoder;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sequence;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  subsequence;
}

- (void).cxx_destruct;
- (void)addAddedById:(id)arg1 clock:(unsigned int)arg2;
- (void)addChildWithId:(unsigned int)arg1;
- (void)addRemovedAddedById:(id)arg1 clock:(unsigned int)arg2;
- (void)finishSubstring;
- (id)init;
- (void)setCharWithId:(id)arg1 clock:(unsigned int)arg2;
- (void)setFromAddedByVersion:(id)arg1;
- (void)setFromVersion:(id)arg1;
- (bool)setStorage:(id)arg1 error:(id*)arg2;
- (void)setWithAddedByVersion:(id)arg1;
- (void)setWithContentOptions:(long long)arg1;
- (void)setWithLength:(unsigned int)arg1;
- (void)setWithVersion:(id)arg1;

@end
