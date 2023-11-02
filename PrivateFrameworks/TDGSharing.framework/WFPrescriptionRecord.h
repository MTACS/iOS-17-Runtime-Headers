
@interface WFPrescriptionRecord : NSObject <NSSecureCoding> {
    void accPayload;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  enrollmentDate;
    void enrollmentName;
    void leftLensFactoryCalibrationData;
    void rightLensFactoryCalibrationData;
    void version;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
