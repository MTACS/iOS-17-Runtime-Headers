
@interface PTCinematographyDecision : NSObject {
    long long  _groupIdentifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maximumDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _minimumDuration;
    unsigned long long  _options;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
    long long  _trackIdentifier;
    PTCinematographyTransition * _transition;
    long long  _type;
}

@property (getter=isGroupDecision, nonatomic, readonly) bool groupDecision;
@property (nonatomic) long long groupIdentifier;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maximumDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } minimumDuration;
@property (nonatomic, readonly) unsigned long long options;
@property (getter=isStrongDecision, nonatomic, readonly) bool strongDecision;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic) long long trackIdentifier;
@property (nonatomic, readonly) PTCinematographyTransition *transition;
@property (nonatomic) long long type;
@property (getter=isUserDecision, nonatomic, readonly) bool userDecision;

+ (id)_decisionsWithCinematographyDictionaries:(id)arg1;
+ (id)_mutableDecisionsWithCinematographyDictionaries:(id)arg1;
+ (id)defaultTransition;

- (void).cxx_destruct;
- (id)_asCinematographyDictionary;
- (id)_decisionByChangingTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)_decisionByRemovingOptions:(unsigned long long)arg1;
- (id)_initWithCinematographyDictionary:(id)arg1;
- (id)_initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackIdentifier:(long long)arg2 groupIdentifier:(long long)arg3 transition:(id)arg4 options:(unsigned long long)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)groupIdentifier;
- (bool)hasMaximumDuration;
- (bool)hasMinimumDuration;
- (unsigned long long)hash;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 groupIdentifier:(long long)arg2 options:(unsigned long long)arg3;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackIdentifier:(long long)arg2;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 trackIdentifier:(long long)arg2 options:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isGroupDecision;
- (bool)isStrongDecision;
- (bool)isUserDecision;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumDuration;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)options;
- (void)setGroupIdentifier:(long long)arg1;
- (void)setMaximumDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMinimumDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTrackIdentifier:(long long)arg1;
- (void)setType:(long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (long long)trackIdentifier;
- (id)transition;
- (long long)type;

@end
