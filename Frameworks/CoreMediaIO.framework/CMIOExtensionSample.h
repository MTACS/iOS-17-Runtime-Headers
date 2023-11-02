
@interface CMIOExtensionSample : NSObject <NSCopying, NSSecureCoding> {
    NSString * _description;
    unsigned int  _mediaType;
    struct opaqueCMSampleBuffer { } * _sampleBuffer;
}

@property (readonly) unsigned int mediaType;
@property (readonly) struct opaqueCMSampleBuffer { }*sampleBuffer;

+ (id)sampleWithCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCDictionary;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)mediaType;
- (struct opaqueCMSampleBuffer { }*)sampleBuffer;

@end
