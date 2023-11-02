
@interface _SFTranscriberResult : NSObject {
    _STCommandRecognizerResult * _contextualizedCommandRecognizerResult;
    _STTranscriberMultisegmentResult * _contextualizedTranscriberMultisegmentResult;
    _STCommandRecognizerResult * _normalizedCommandRecognizerResult;
    _STTranscriberMultisegmentResult * _normalizedTranscriberMultisegmentResult;
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
}

@property (nonatomic, readonly, copy) _STCommandRecognizerResult *contextualizedCommandRecognizerResult;
@property (nonatomic, readonly, copy) _STTranscriberMultisegmentResult *contextualizedTranscriberMultisegmentResult;
@property (nonatomic, readonly, copy) _STCommandRecognizerResult *normalizedCommandRecognizerResult;
@property (nonatomic, readonly, copy) _STTranscriberMultisegmentResult *normalizedTranscriberMultisegmentResult;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } range;

- (void).cxx_destruct;
- (id)contextualizedCommandRecognizerResult;
- (id)contextualizedTranscriberMultisegmentResult;
- (id)initWithRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 normalizedTranscriberMultisegmentResult:(id)arg2 normalizedCommandRecognizerResult:(id)arg3 contextualizedTranscriberMultisegmentResult:(id)arg4 contextualizedCommandRecognizerResult:(id)arg5;
- (id)normalizedCommandRecognizerResult;
- (id)normalizedTranscriberMultisegmentResult;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })range;

@end
