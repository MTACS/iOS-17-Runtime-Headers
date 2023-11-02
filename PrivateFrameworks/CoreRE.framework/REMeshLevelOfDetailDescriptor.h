
@interface REMeshLevelOfDetailDescriptor : NSObject <NSSecureCoding> {
    float  _maxViewDepth;
    unsigned int  _meshPartEndIndex;
    float  _minScreenArea;
}

@property (nonatomic, readonly) float maxViewDepth;
@property (nonatomic, readonly) unsigned int meshPartEndIndex;
@property (nonatomic, readonly) float minScreenArea;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLodLevelInfo:(const struct MeshLodLevelInfo { float x1; float x2; unsigned int x3; }*)arg1;
- (id)initWithMeshPartEndIndex:(unsigned int)arg1 minScreenArea:(float)arg2 maxViewDepth:(float)arg3;
- (struct MeshLodLevelInfo { float x1; float x2; unsigned int x3; })lodLevelInfo;
- (float)maxViewDepth;
- (unsigned int)meshPartEndIndex;
- (float)minScreenArea;
- (bool)validateWithPartCount:(unsigned long long)arg1 error:(id*)arg2;

@end
