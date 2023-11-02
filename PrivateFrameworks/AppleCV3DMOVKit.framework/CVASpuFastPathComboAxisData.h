
@interface CVASpuFastPathComboAxisData : NSObject <NSSecureCoding> {
    int  _ax;
    int  _ay;
    int  _az;
    unsigned long long  _frameId;
    int  _gx;
    int  _gy;
    int  _gz;
    unsigned int  _packetType;
    unsigned int  _sample_id;
    unsigned long long  _syncTimestamp;
    int  _temperature;
    double  _timestamp;
    int  _unfiltered_ax;
    int  _unfiltered_ay;
    int  _unfiltered_az;
    unsigned int  _valid_data;
}

@property (nonatomic) int ax;
@property (nonatomic) int ay;
@property (nonatomic) int az;
@property (nonatomic) unsigned long long frameId;
@property (nonatomic) int gx;
@property (nonatomic) int gy;
@property (nonatomic) int gz;
@property (nonatomic) unsigned int packetType;
@property (nonatomic) unsigned int sample_id;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) int temperature;
@property (nonatomic) double timestamp;
@property (nonatomic) int unfiltered_ax;
@property (nonatomic) int unfiltered_ay;
@property (nonatomic) int unfiltered_az;
@property (nonatomic) unsigned int valid_data;

+ (id)classes;
+ (double)getTimestamp:(id)arg1;
+ (bool)supportsSecureCoding;

- (int)ax;
- (int)ay;
- (int)az;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameId;
- (int)gx;
- (int)gy;
- (int)gz;
- (id)initWithCoder:(id)arg1;
- (id)initWithFastPathIMUData:(id)arg1;
- (unsigned int)packetType;
- (unsigned int)sample_id;
- (void)setAx:(int)arg1;
- (void)setAy:(int)arg1;
- (void)setAz:(int)arg1;
- (void)setFrameId:(unsigned long long)arg1;
- (void)setGx:(int)arg1;
- (void)setGy:(int)arg1;
- (void)setGz:(int)arg1;
- (void)setPacketType:(unsigned int)arg1;
- (void)setSample_id:(unsigned int)arg1;
- (void)setSyncTimestamp:(unsigned long long)arg1;
- (void)setTemperature:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setUnfiltered_ax:(int)arg1;
- (void)setUnfiltered_ay:(int)arg1;
- (void)setUnfiltered_az:(int)arg1;
- (void)setValid_data:(unsigned int)arg1;
- (unsigned long long)syncTimestamp;
- (int)temperature;
- (double)timestamp;
- (int)unfiltered_ax;
- (int)unfiltered_ay;
- (int)unfiltered_az;
- (unsigned int)valid_data;

@end
