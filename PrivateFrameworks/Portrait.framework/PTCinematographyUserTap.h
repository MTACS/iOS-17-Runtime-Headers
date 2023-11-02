
@interface PTCinematographyUserTap : NSObject {
    PTCinematographyDetection * _detection;
    bool  _groupTap;
    bool  _strong;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
}

@property (readonly) PTCinematographyDetection *detection;
@property (readonly) long long groupIdentifier;
@property (getter=isGroupTap, readonly) bool groupTap;
@property (getter=isStrong, readonly) bool strong;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (readonly) long long trackIdentifier;
@property (readonly) NSNumber *trackNumber;

- (void).cxx_destruct;
- (id)detection;
- (id)focusIdentifier;
- (long long)groupIdentifier;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 tappedDetection:(id)arg2 strong:(bool)arg3;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 tappedDetection:(id)arg2 strong:(bool)arg3 group:(bool)arg4;
- (bool)isGroupTap;
- (bool)isStrong;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (long long)trackIdentifier;
- (id)trackNumber;

@end
