
@interface CLTripSegmentInputData : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _inertialData;
    bool  _isFinalPart;
    long long  _modeOfTransport;
    CLTripSegmentLocation * _startTripLocation;
    CLTripSegmentLocation * _stopTripLocation;
    NSArray * _tripLocations;
    NSUUID * _tripSegmentID;
}

@property (readonly) NSArray *inertialData;
@property (nonatomic, readonly) bool isFinalPart;
@property (nonatomic, readonly) long long modeOfTransport;
@property (readonly) CLTripSegmentLocation *startTripLocation;
@property (readonly) CLTripSegmentLocation *stopTripLocation;
@property (readonly) NSArray *tripLocations;
@property (readonly) NSUUID *tripSegmentID;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)inertialData;
- (id)initWithCoder:(id)arg1;
- (id)initWithTripSegmentID:(id)arg1 isFinalPart:(bool)arg2 modeOfTransport:(long long)arg3 tripLocations:(id)arg4;
- (id)initWithTripSegmentID:(id)arg1 isFinalPart:(bool)arg2 modeOfTransport:(long long)arg3 tripLocations:(id)arg4 startTripLocation:(id)arg5 stopTripLocation:(id)arg6 inertialData:(id)arg7;
- (bool)isFinalPart;
- (long long)modeOfTransport;
- (id)startTripLocation;
- (id)stopTripLocation;
- (id)tripLocations;
- (id)tripSegmentID;

@end
