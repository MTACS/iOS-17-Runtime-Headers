
@interface BWStillImageCaptureTimeMachineFrameInfo : BWStillImageCaptureFrameInfo <NSSecureCoding> {
    bool  _isNoLongErrorRecoveryFrame;
    int  _timeMachineIndex;
}

@property (nonatomic) bool isNoLongErrorRecoveryFrame;
@property (nonatomic, readonly) int timeMachineIndex;

+ (id)infoWithTimeMachineIndex:(int)arg1 mainFlags:(unsigned long long)arg2 sifrFlags:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeMachineIndex:(int)arg1 mainFlags:(unsigned long long)arg2 sifrFlags:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isNoLongErrorRecoveryFrame;
- (void)setIsNoLongErrorRecoveryFrame:(bool)arg1;
- (int)timeMachineIndex;

@end
