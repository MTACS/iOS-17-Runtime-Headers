
@interface ETImagePreprocessParams : NSObject {
    float  _bias_b;
    float  _bias_g;
    float  _bias_r;
    unsigned long long  _channels;
    unsigned long long  _height;
    bool  _network_wants_bgr;
    float  _scale;
    unsigned long long  _width;
}

@property (nonatomic, readonly) float bias_b;
@property (nonatomic, readonly) float bias_g;
@property (nonatomic, readonly) float bias_r;
@property (nonatomic, readonly) unsigned long long channels;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) bool network_wants_bgr;
@property (nonatomic, readonly) float scale;
@property (nonatomic, readonly) unsigned long long width;

- (float)bias_b;
- (float)bias_g;
- (float)bias_r;
- (unsigned long long)channels;
- (unsigned long long)height;
- (id)initWithHeight:(unsigned long long)arg1 Width:(unsigned long long)arg2 NumChannels:(unsigned long long)arg3 Scale:(float)arg4 BiasR:(float)arg5 BiasG:(float)arg6 BiasB:(float)arg7 NetworkWantBGR:(bool)arg8;
- (bool)network_wants_bgr;
- (float)scale;
- (unsigned long long)width;

@end
