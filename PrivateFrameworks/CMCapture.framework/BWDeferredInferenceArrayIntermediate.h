
@interface BWDeferredInferenceArrayIntermediate : BWDeferredArrayIntermediate {
    NSString * _inferenceAttachmentKey;
    NSString * _portType;
}

@property (nonatomic, readonly) NSString *inferenceAttachmentKey;
@property (nonatomic, readonly) NSString *portType;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)inferenceAttachmentKey;
- (id)initWithArray:(id)arg1 tag:(id)arg2 inferenceAttachmentKey:(id)arg3 portType:(id)arg4 URL:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)portType;

@end
