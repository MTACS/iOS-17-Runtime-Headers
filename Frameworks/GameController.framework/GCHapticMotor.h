
@interface GCHapticMotor : NSObject <NSCopying, NSSecureCoding> {
    float  _amplitude;
    unsigned long long  _features;
    float  _frequency;
    int  _index;
    NSString * _name;
    NSMutableArray * _queuedTransients;
}

@property (nonatomic) float amplitude;
@property (nonatomic, readonly) unsigned long long features;
@property (nonatomic) float frequency;
@property (nonatomic, readonly) int index;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, retain) NSMutableArray *queuedTransients;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)amplitude;
- (void)applyValuesFrom:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)drainQueuedTransients;
- (void)encodeWithCoder:(id)arg1;
- (void)enqueueHapticTransientEvent:(id)arg1;
- (unsigned long long)features;
- (float)frequency;
- (int)index;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(int)arg1;
- (id)initWithIndex:(int)arg1 name:(id)arg2;
- (id)initWithIndex:(int)arg1 name:(id)arg2 features:(unsigned long long)arg3;
- (id)initWithIndex:(int)arg1 name:(id)arg2 features:(unsigned long long)arg3 frequency:(float)arg4 amplitude:(float)arg5;
- (id)name;
- (id)queuedTransients;
- (void)setAmplitude:(float)arg1;
- (void)setFrequency:(float)arg1;
- (void)setQueuedTransients:(id)arg1;

@end
