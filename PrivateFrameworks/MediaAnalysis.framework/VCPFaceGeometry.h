
@interface VCPFaceGeometry : NSObject <NSSecureCoding> {
    unsigned long long  _vertexCount;
    /* Warning: Unrecognized filer type: '' using 'void*' */ void** _vertices;
}

@property (nonatomic, readonly) unsigned long long vertexCount;
@property (nonatomic, readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**vertices;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVertices:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 vertexCount:(unsigned long long)arg2;
- (unsigned long long)vertexCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)vertices;

@end
