
@interface CMContinuityCaptureStreamFormat : NSObject <CMContinuityCaptureDictionaryRepresentable, NSSecureCoding> {
    long long  _entity;
    id  _formatDescription;
    unsigned long long  _height;
    unsigned int  _maxFrameRate;
    unsigned int  _minFrameRate;
    struct { 
        long long major; 
        long long minor; 
        long long patch; 
    }  _minimumSupportedVersion;
    NSString * _name;
    unsigned int  _pixelFormat;
    unsigned long long  _width;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long entity;
@property (readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) unsigned int maxFrameRate;
@property (nonatomic, readonly) unsigned int minFrameRate;
@property (readonly) struct { long long x1; long long x2; long long x3; } minimumSupportedVersion;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly) unsigned int pixelFormat;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long width;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (long long)entity;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned long long)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelFormat:(unsigned int)arg4 minFrameRate:(unsigned int)arg5 maxFrameRate:(unsigned int)arg6 entity:(long long)arg7 minimumSupportedVersion:(struct { long long x1; long long x2; long long x3; })arg8;
- (unsigned int)maxFrameRate;
- (unsigned int)minFrameRate;
- (struct { long long x1; long long x2; long long x3; })minimumSupportedVersion;
- (id)name;
- (unsigned int)pixelFormat;
- (unsigned long long)width;

@end
