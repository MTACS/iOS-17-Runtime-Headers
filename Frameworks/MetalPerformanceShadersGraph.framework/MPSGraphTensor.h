
@interface MPSGraphTensor : MPSGraphObject <NSCopying> {
    unsigned int  _dataType;
    MPSGraph * _graph;
    unsigned long long  _index;
    NSString * _name;
    MPSGraphOperation * _operation;
    MPSGraphBlock * _parentBlock;
    NSArray * _shape;
    struct Value { 
        struct ValueImpl {} *impl; 
    }  _value;
}

@property (nonatomic, readonly) unsigned int dataType;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) MPSGraphOperation *operation;
@property (nonatomic, readonly, copy) NSArray *shape;
@property (nonatomic, readonly) struct Value { struct ValueImpl {} *x1; } value;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataType;
- (id)debugDescription;
- (unsigned long long)index;
- (id)initTensorWithOperation:(id)arg1 value:(struct Value { struct ValueImpl {} *x1; })arg2 graph:(id)arg3;
- (id)initTensorWithOperation:(id)arg1 value:(struct Value { struct ValueImpl {} *x1; })arg2 graph:(id)arg3 name:(id)arg4;
- (id)initTensorWithOperation:(id)arg1 value:(struct Value { struct ValueImpl {} *x1; })arg2 graph:(id)arg3 parentBlock:(id)arg4 name:(id)arg5;
- (id)initTensorWithValue:(struct Value { struct ValueImpl {} *x1; })arg1 graph:(id)arg2;
- (id)name;
- (id)operation;
- (id)shape;
- (struct Value { struct ValueImpl {} *x1; })value;

@end
