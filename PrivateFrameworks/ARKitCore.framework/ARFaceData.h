
@interface ARFaceData : NSObject <NSSecureCoding> {
    NSArray * _detectedFaces;
    NSDictionary * _faceMeshPayload;
    bool  _mirrored;
}

@property (nonatomic, retain) NSArray *detectedFaces;
@property (nonatomic, retain) NSDictionary *faceMeshPayload;
@property (getter=isMirrored, nonatomic) bool mirrored;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)detectedFaces;
- (void)encodeWithCoder:(id)arg1;
- (id)faceMeshPayload;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadataObjects:(id)arg1 mirroredVideoInput:(bool)arg2 stripDetectionData:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isMirrored;
- (void)setDetectedFaces:(id)arg1;
- (void)setFaceMeshPayload:(id)arg1;
- (void)setMirrored:(bool)arg1;

@end
