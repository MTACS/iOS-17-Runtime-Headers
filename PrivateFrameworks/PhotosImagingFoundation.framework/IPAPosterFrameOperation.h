
@interface IPAPosterFrameOperation : IPAVideoOperation {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameTime;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } frameTime;

- (id)debugDescription;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameTime;
- (id)identifier;
- (id)initWithFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithOperation:(id)arg1;
- (id)initWithSettingsDictionary:(id)arg1;
- (bool)isEqualToOperation:(id)arg1;
- (bool)isMigratable;
- (id)settingsDictionary;

@end
