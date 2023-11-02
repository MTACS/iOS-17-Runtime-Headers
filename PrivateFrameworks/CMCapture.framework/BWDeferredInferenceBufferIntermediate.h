
@interface BWDeferredInferenceBufferIntermediate : BWDeferredBufferIntermediate {
    NSString * _inferenceAttachedMediaKey;
}

@property (nonatomic, readonly) NSString *inferenceAttachedMediaKey;

+ (bool)supportsSecureCoding;

- (id)_shortString;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)inferenceAttachedMediaKey;
- (id)initWithBuffer:(struct __CVBuffer { }*)arg1 tag:(id)arg2 inferenceAttachedMediaKey:(id)arg3 portType:(id)arg4 compressionProfile:(int)arg5 URL:(id)arg6;
- (id)initWithCoder:(id)arg1;

@end
