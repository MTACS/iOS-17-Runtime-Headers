
@interface CRCtcTimeSample : NSObject {
    struct CRCtcCandidate { 
        int symbol; 
        float prob; 
    }  _blank;
    void * _sample;
}

@property struct CRCtcCandidate { int x1; float x2; } blank;
@property void*sample;

- (void)addCandidate:(struct CRCtcCandidate { int x1; float x2; })arg1;
- (struct CRCtcCandidate { int x1; float x2; })blank;
- (const void*)candidates;
- (void)dealloc;
- (id)init;
- (void*)sample;
- (void)setBlank:(struct CRCtcCandidate { int x1; float x2; })arg1;
- (void)setSample:(void*)arg1;
- (struct CRCtcCandidate { int x1; float x2; })topCandidate;
- (void)trimCandidates;

@end
