
@interface CoreIDVShared.ImageQualityMetrics : NSObject <NSSecureCoding> {
    void blinkingConfidence;
    void blurriness;
    void captureTime;
    void cardDistortion;
    void closestMatchAssessments;
    void documentCorners;
    void documentRotation;
    void documentSize;
    void documentSkew;
    void documentType;
    void downDrift;
    void errorCode;
    void exploration;
    void exposure;
    void faceCaptureQuality;
    void faceCenteredRatio;
    void faceConfidences;
    void faceToImageRatio;
    void facemaskConfidence;
    void fuzzyMatchAssessment;
    void headPitch;
    void headRoll;
    void headYaw;
    void headgearConfidence;
    void isAAMVACompliant;
    void isAutoCaptured;
    void issuerNumber;
    void leftDrift;
    void luxLevel;
    void modelDecision;
    void modelVersion;
    void numFaces;
    void originalVertices;
    void pdf417Detected;
    void prescriptionConfidence;
    void rectangleCorners;
    void rescanCount;
    void rightDrift;
    void skinTone;
    void sunglassesConfidence;
    void targetVertices;
    void upDrift;
}

@property (nonatomic, readonly) NSString *debugDescription;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
