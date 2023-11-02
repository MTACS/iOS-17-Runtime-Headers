
@interface _STTranscriberMultisegmentResult : NSObject <NSCopying> {
    unsigned long long  _earResultType;
    NSArray * _nBestChoices;
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
    }  _recognitionAudioRange;
    NSArray * _segments;
    NSArray * _transcriptions;
}

@property (nonatomic, readonly) unsigned long long earResultType;
@property (nonatomic, readonly, copy) NSArray *nBestChoices;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } recognitionAudioRange;
@property (nonatomic, readonly, copy) NSArray *segments;
@property (nonatomic, readonly, copy) NSArray *transcriptions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)earResultType;
- (id)initWithSegments:(id)arg1 transcriptions:(id)arg2 earResultType:(unsigned long long)arg3 nBestChoices:(id)arg4 recognitionAudioRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg5;
- (id)nBestChoices;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })recognitionAudioRange;
- (id)segments;
- (id)transcriptions;

@end
