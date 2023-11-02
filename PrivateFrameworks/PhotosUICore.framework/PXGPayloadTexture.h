
@interface PXGPayloadTexture : PXGBaseTexture {
    <NSCopying> * _payload;
    unsigned char  _presentationType;
}

@property (nonatomic, readonly, copy) <NSCopying> *payload;
@property (nonatomic, readonly) unsigned char presentationType;

- (void).cxx_destruct;
- (long long)estimatedByteSize;
- (struct CGImage { }*)imageRepresentation;
- (id)init;
- (id)initWithPayload:(id)arg1 presentationType:(unsigned char)arg2;
- (bool)isOpaque;
- (id)payload;
- (struct CGSize { double x1; double x2; })pixelSize;
- (unsigned char)presentationType;

@end
