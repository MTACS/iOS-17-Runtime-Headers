
@interface CMIOExtensionStreamCustomClockConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clockName;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _getTimeCallMinimumInterval;
    unsigned int  _numberOfAveragesForRateSmoothing;
    unsigned int  _numberOfEventsForRateSmoothing;
    NSUUID * _sourceIdentifier;
}

@property (readonly) NSString *clockName;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } getTimeCallMinimumInterval;
@property (readonly) unsigned int numberOfAveragesForRateSmoothing;
@property (readonly) unsigned int numberOfEventsForRateSmoothing;
@property (readonly) NSUUID *sourceIdentifier;

+ (id)customClockConfigurationWithClockName:(id)arg1 sourceIdentifier:(id)arg2 getTimeCallMinimumInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 numberOfEventsForRateSmoothing:(unsigned int)arg4 numberOfAveragesForRateSmoothing:(unsigned int)arg5;
+ (bool)supportsSecureCoding;

- (id)clockName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCDictionary;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })getTimeCallMinimumInterval;
- (id)initWithClockName:(id)arg1 sourceIdentifier:(id)arg2 getTimeCallMinimumInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 numberOfEventsForRateSmoothing:(unsigned int)arg4 numberOfAveragesForRateSmoothing:(unsigned int)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)numberOfAveragesForRateSmoothing;
- (unsigned int)numberOfEventsForRateSmoothing;
- (id)sourceIdentifier;

@end
