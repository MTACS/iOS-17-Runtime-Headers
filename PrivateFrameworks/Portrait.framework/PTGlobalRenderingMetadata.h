
@interface PTGlobalRenderingMetadata : NSObject <PTSerializable> {
    unsigned int  _majorVersion;
    unsigned int  _minorVersion;
    unsigned int  _renderingVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int majorVersion;
@property (nonatomic, readonly) unsigned int minorVersion;
@property (nonatomic) unsigned int renderingVersion;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Portrait.framework/Portrait

+ (id)objectFromData:(id)arg1;

- (void)applyToRenderRequest:(id)arg1;
- (void)applyToRenderState:(id)arg1;
- (bool)applyToRenderState:(id)arg1 error:(id*)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsic;
- (id)initWithMajorVersion:(unsigned int)arg1 minorVersion:(unsigned int)arg2;
- (unsigned int)majorVersion;
- (bool)matchesRenderState:(id)arg1;
- (unsigned int)minorVersion;
- (unsigned int)renderingVersion;
- (void)setRenderingVersion:(unsigned int)arg1;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)arg1;
- (bool)writeToData:(id)arg1 withOptions:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

- (id)CIImageProcessorDigestObject;
- (void)nu_updateDigest:(id)arg1;

@end
