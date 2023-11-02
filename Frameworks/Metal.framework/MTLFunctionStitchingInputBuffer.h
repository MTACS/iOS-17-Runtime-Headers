
@interface MTLFunctionStitchingInputBuffer : NSObject <MTLFunctionStitchingInputNodeSPI> {
    unsigned long long  _bindIndex;
}

@property (nonatomic) unsigned long long bindIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)bindIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithBindIndex:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBindIndex:(unsigned long long)arg1;

@end
