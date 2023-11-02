
@interface VCPVideoPersonDetector : VCPVideoAnalyzer {
    NSMutableArray * _persons;
}

- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)detectPersons:(struct __CVBuffer { }*)arg1 persons:(id)arg2;
- (id)init;
- (id)persons;

@end
