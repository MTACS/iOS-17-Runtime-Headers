
@interface MPSGraphListData : MPSGraphTensorData {
    MPSGraphType * _elementType;
    NSMutableArray * _list;
    long long  _maxSize;
}

- (void).cxx_destruct;
- (id)clonedList;
- (id)elementType;
- (id)initEmptyListWithDevice:(id)arg1 maxSize:(long long)arg2 elementType:(id)arg3;
- (id)initWithDevice:(id)arg1 list:(id)arg2 maxSize:(long long)arg3 elementType:(id)arg4;
- (id)list;
- (long long)maxSize;
- (id)mpsndarray;
- (id)popBackElement;
- (void)pushBackElement:(id)arg1;

@end
