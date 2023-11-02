
@interface REDrawableQueueTexturePayload : RESharedResourcePayload {
    REDrawableQueuePayload * _drawableQueue;
    RESharedResourcePayload * _placeholderTexture;
}

@property (nonatomic, readonly) REDrawableQueuePayload *drawableQueue;
@property (nonatomic, readonly) RESharedResourcePayload *placeholderTexture;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)drawableQueue;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDrawableQueue:(id)arg1 placeholderTexture:(id)arg2;
- (id)placeholderTexture;
- (id)redactedDescription;

@end
