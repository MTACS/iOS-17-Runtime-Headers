
@interface BWDeferredMetadataIntermediate : BWDeferredDictionaryIntermediate {
    NSString * _bufferTag;
}

@property (nonatomic, readonly) NSString *bufferTag;

+ (bool)supportsSecureCoding;

- (id)bufferTag;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadata:(id)arg1 tag:(id)arg2 bufferTag:(id)arg3 URL:(id)arg4;

@end
