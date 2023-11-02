
@interface _SFEndpointingResult : NSObject {
    double  _eosLikelihood;
    NSArray * _pauseCounts;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _range;
    double  _silencePosterior;
    long long  _wordCount;
}

@property (nonatomic, readonly) double eosLikelihood;
@property (nonatomic, readonly, copy) NSArray *pauseCounts;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } range;
@property (nonatomic, readonly) double silencePosterior;
@property (nonatomic, readonly) long long wordCount;

- (void).cxx_destruct;
- (double)eosLikelihood;
- (id)initWithRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 wordCount:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5;
- (id)pauseCounts;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })range;
- (double)silencePosterior;
- (long long)wordCount;

@end
