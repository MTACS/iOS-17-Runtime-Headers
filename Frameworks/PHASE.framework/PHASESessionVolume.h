
@interface PHASESessionVolume : NSObject {
    bool  _muted;
    long long  _unit;
    float  _value;
}

@property (nonatomic, readonly) bool muted;
@property (nonatomic, readonly) long long unit;
@property (nonatomic, readonly) float value;

- (id)description;
- (id)initWithValue:(float)arg1 unit:(long long)arg2;
- (id)initWithValue:(float)arg1 unit:(long long)arg2 muted:(bool)arg3;
- (bool)muted;
- (long long)unit;
- (float)value;

@end
