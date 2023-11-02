
@interface HMCameraClipVideoDataSegment : HMCameraClipVideoSegment {
    double  _duration;
    double  _timeOffset;
}

@property (readonly) double duration;
@property (readonly) double timeOffset;

+ (bool)supportsSecureCoding;

- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithByteLength:(unsigned long long)arg1 byteOffset:(unsigned long long)arg2 duration:(double)arg3 timeOffset:(double)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)timeOffset;

@end
