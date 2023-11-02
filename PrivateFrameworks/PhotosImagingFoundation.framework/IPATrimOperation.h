
@interface IPATrimOperation : IPAVideoOperation {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _endTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } endTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } startTime;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } trimRange;

- (id)debugDescription;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })endTime;
- (id)identifier;
- (id)initWithOperation:(id)arg1;
- (id)initWithSettingsDictionary:(id)arg1;
- (id)initWithStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 endTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)initWithTrimRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (bool)isEqualToOperation:(id)arg1;
- (id)settingsDictionary;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })startTime;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })trimRange;
- (id)trimRangeDictionary;

@end
