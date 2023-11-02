
@interface AVTaggedVideoOutputSpecification : NSObject {
    NSDictionary * _defaultPixelBufferAttrbiutes;
    NSObject<OS_dispatch_queue> * _ivarAccessQueue;
    struct __CFDictionary { } * _tagCollectionPixelBufferAttributesMapping;
    NSArray * _tagCollections;
}

@property (nonatomic, copy) NSDictionary *defaultPixelBufferAttributes;
@property (nonatomic, readonly, copy) NSArray *preferredTagCollections;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultPixelBufferAttributes;
- (id)init;
- (id)initWithTagCollections:(id)arg1;
- (id)pixelBufferAttributesForTagCollection:(struct OpaqueCMTagCollection { }*)arg1;
- (id)preferredTagCollections;
- (void)setDefaultPixelBufferAttributes:(id)arg1;
- (void)setOutputPixelBufferAttributes:(id)arg1 forTagCollection:(struct OpaqueCMTagCollection { }*)arg2;
- (bool)setupWithTagCollections:(id)arg1 exceptionReasonOut:(id*)arg2;

@end
