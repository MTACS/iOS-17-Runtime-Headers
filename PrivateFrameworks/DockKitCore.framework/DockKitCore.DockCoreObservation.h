
@interface DockKitCore.DockCoreObservation : NSObject <NSSecureCoding> {
    void X;
    void Y;
    void confidence;
    void groupId;
    void height;
    void identifier;
    void modality;
    void newTrack;
    void pitchAngle;
    void printConfidence;
    void trackerID;
    void type;
    void width;
    void yawAngle;
}

@property (nonatomic, readonly) double X;
@property (nonatomic, readonly) double Y;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic, readonly) bool newTrack;
@property (nonatomic, readonly) double pitchAngle;
@property (nonatomic, readonly) long long trackerID;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double yawAngle;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (double)X;
- (double)Y;
- (double)confidence;
- (void)encodeWithCoder:(id)arg1;
- (double)height;
- (long long)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)newTrack;
- (double)pitchAngle;
- (long long)trackerID;
- (long long)type;
- (double)width;
- (double)yawAngle;

@end
