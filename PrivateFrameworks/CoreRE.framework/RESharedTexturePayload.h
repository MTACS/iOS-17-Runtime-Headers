
@interface RESharedTexturePayload : RESharedResourcePayload {
    MTLSharedTextureHandle * _handle;
}

@property (nonatomic, readonly) MTLSharedTextureHandle *handle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (bool)hasSameUnderlyingIOSurface:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTexture:(id)arg1;
- (id)redactedDescription;

@end
