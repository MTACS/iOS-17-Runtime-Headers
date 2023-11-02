
@interface MTLDebugRenderTargetAttachmentInfo : NSObject {
    <MTLTexture> * _attachmentTexture;
    unsigned long long  _baseLevelOffset;
    <MTLTexture> * _baseResolveTexture;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _baseSliceRangeOffset;
    <MTLTexture> * _baseTexture;
    unsigned long long  _renderTargetArrayLength;
    unsigned long long  _resolveLevelOffset;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _resolveSliceRangeOffset;
}

@property (nonatomic, readonly) <MTLTexture> *attachmentTexture;
@property (nonatomic, readonly) unsigned long long baseLevelOffset;
@property (nonatomic, readonly) <MTLTexture> *baseResolveTexture;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } baseSliceRangeOffset;
@property (nonatomic, readonly) <MTLTexture> *baseTexture;
@property (nonatomic, readonly) unsigned long long renderTargetArrayLength;
@property (nonatomic, readonly) unsigned long long resolveLevelOffset;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } resolveSliceRangeOffset;

- (id)attachmentTexture;
- (unsigned long long)baseLevelOffset;
- (id)baseResolveTexture;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })baseSliceRangeOffset;
- (id)baseTexture;
- (unsigned long long)hash;
- (id)initWithDesc:(const struct MTLRenderPassAttachmentDescriptorPrivate { id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; struct { double x_8_1_1; double x_8_1_2; double x_8_1_3; double x_8_1_4; } x8; double x9; unsigned int x10; unsigned long long x11; id x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; bool x19; }*)arg1 renderTargetArrayLength:(unsigned long long)arg2;
- (unsigned long long)intersectsTexture:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)renderTargetArrayLength;
- (unsigned long long)resolveLevelOffset;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })resolveSliceRangeOffset;

@end
