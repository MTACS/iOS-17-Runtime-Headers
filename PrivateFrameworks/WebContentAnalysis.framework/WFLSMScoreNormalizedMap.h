
@interface WFLSMScoreNormalizedMap : WFLSMMap {
    float * maxScore;
    float * minScore;
}

- (void)dealloc;
- (id)evaluate:(id)arg1;
- (id)initWithMap:(struct __LSMMap { }*)arg1;

@end
