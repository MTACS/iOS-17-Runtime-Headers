
@interface MXDuckingSource : NSObject {
    unsigned long long  _ID;
    float  _duckFadeDuration;
    float  _duckVolume;
    unsigned int  _type;
}

@property (nonatomic, readonly) unsigned long long ID;
@property (nonatomic) float duckFadeDuration;
@property (nonatomic) float duckVolume;
@property (nonatomic, readonly) unsigned int type;

- (unsigned long long)ID;
- (void)dealloc;
- (float)duckFadeDuration;
- (float)duckVolume;
- (id)initWithType:(unsigned int)arg1 ID:(unsigned long long)arg2 duckVolume:(float)arg3 duckFadeDuration:(float)arg4;
- (void)setDuckFadeDuration:(float)arg1;
- (void)setDuckVolume:(float)arg1;
- (unsigned int)type;

@end
