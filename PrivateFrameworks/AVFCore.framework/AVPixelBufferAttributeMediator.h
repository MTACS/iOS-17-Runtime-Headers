
@interface AVPixelBufferAttributeMediator : NSObject {
    struct OpaqueVTPixelBufferAttributesMediator { } * _mediator;
}

- (void)dealloc;
- (id)init;
- (id)mediatedPixelBufferAttributes;
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)arg1;
- (void)setLayersAreSuppressed:(bool)arg1;
- (void)setRequestedPixelBufferAttributes:(id)arg1 forKey:(id)arg2;

@end
