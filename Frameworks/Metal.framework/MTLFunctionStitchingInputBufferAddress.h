
@interface MTLFunctionStitchingInputBufferAddress : NSObject <MTLFunctionStitchingInputNodeSPI> {
    unsigned long long  _bindIndex;
    unsigned long long  _byteOffset;
    bool  _dereference;
}

@property (nonatomic) unsigned long long bindIndex;
@property (nonatomic) unsigned long long byteOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool dereference;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)bindIndex;
- (unsigned long long)byteOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)dereference;
- (unsigned long long)hash;
- (id)initWithBindIndex:(unsigned long long)arg1;
- (id)initWithBindIndex:(unsigned long long)arg1 byteOffset:(unsigned long long)arg2 dereference:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (void)setBindIndex:(unsigned long long)arg1;
- (void)setByteOffset:(unsigned long long)arg1;
- (void)setDereference:(bool)arg1;

@end
