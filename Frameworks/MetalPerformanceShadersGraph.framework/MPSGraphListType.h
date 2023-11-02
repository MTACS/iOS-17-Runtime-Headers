
@interface MPSGraphListType : MPSGraphType {
    MPSGraphType * _elementType;
}

@property (copy) MPSGraphType *elementType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)elementType;
- (id)initWithElementType:(id)arg1;
- (void)setElementType:(id)arg1;

@end
