
@interface AVAudioTime : NSObject {
    struct AudioTimeStamp { 
        double mSampleTime; 
        unsigned long long mHostTime; 
        double mRateScalar; 
        unsigned long long mWordClockTime; 
        struct SMPTETime { 
            short mSubframes; 
            short mSubframeDivisor; 
            unsigned int mCounter; 
            unsigned int mType; 
            unsigned int mFlags; 
            short mHours; 
            short mMinutes; 
            short mSeconds; 
            short mFrames; 
        } mSMPTETime; 
        unsigned int mFlags; 
        unsigned int mReserved; 
    }  _ats;
    void * _reserved;
    double  _sampleRate;
}

@property (nonatomic, readonly) struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; } audioTimeStamp;
@property (nonatomic, readonly) unsigned long long hostTime;
@property (getter=isHostTimeValid, nonatomic, readonly) bool hostTimeValid;
@property (nonatomic, readonly) double sampleRate;
@property (nonatomic, readonly) long long sampleTime;
@property (getter=isSampleTimeValid, nonatomic, readonly) bool sampleTimeValid;

+ (unsigned long long)hostTimeForSeconds:(double)arg1;
+ (double)secondsForHostTime:(unsigned long long)arg1;
+ (id)timeWithAudioTimeStamp:(const struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; }*)arg1 sampleRate:(double)arg2;
+ (id)timeWithHostTime:(unsigned long long)arg1;
+ (id)timeWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3;
+ (id)timeWithSampleTime:(long long)arg1 atRate:(double)arg2;

- (struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; })audioTimeStamp;
- (id)description;
- (id)extrapolateTimeFromAnchor:(id)arg1;
- (unsigned long long)hostTime;
- (id)init;
- (id)initWithAudioTimeStamp:(const struct AudioTimeStamp { double x1; unsigned long long x2; double x3; unsigned long long x4; struct SMPTETime { short x_5_1_1; short x_5_1_2; unsigned int x_5_1_3; unsigned int x_5_1_4; unsigned int x_5_1_5; short x_5_1_6; short x_5_1_7; short x_5_1_8; short x_5_1_9; } x5; unsigned int x6; unsigned int x7; }*)arg1 sampleRate:(double)arg2;
- (id)initWithHostTime:(unsigned long long)arg1;
- (id)initWithHostTime:(unsigned long long)arg1 sampleTime:(long long)arg2 atRate:(double)arg3;
- (id)initWithSampleTime:(long long)arg1 atRate:(double)arg2;
- (bool)isHostTimeValid;
- (bool)isSampleTimeValid;
- (double)sampleRate;
- (long long)sampleTime;

@end
