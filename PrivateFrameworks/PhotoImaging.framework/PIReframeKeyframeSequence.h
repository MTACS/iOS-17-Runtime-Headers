
@interface PIReframeKeyframeSequence : NSObject {
    NUKeyframeSequenceMatrixFloat33 * _homographySequence;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (unsigned long long)count;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })homographyAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithKeyframeArray:(id)arg1;
- (long long)interpolation;
- (id)sparseSequence;

@end
