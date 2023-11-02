
@interface MPSGraphVariable : MPSGraphObject <NSCopying> {
    NSData * _data;
    unsigned int  _dataType;
    NSMutableArray * _mpsndarrays;
    NSArray * _shape;
    struct Value { 
        struct ValueImpl {} *impl; 
    }  _value;
}

@property (nonatomic, readonly) unsigned int dataType;
@property (nonatomic, readonly, copy) NSArray *shape;
@property (nonatomic, readonly) struct Value { struct ValueImpl {} *x1; } value;

+ (id)newVariableWithData:(id)arg1 dataType:(unsigned int)arg2 shape:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataType;
- (id)initVariableWithData:(id)arg1 dataType:(unsigned int)arg2 shape:(id)arg3;
- (id)initVariableWithData:(id)arg1 value:(struct Value { struct ValueImpl {} *x1; })arg2;
- (id)initVariableWithMPSNDArray:(id)arg1 value:(struct Value { struct ValueImpl {} *x1; })arg2;
- (id)mpsNDArrayWithDevice:(id)arg1;
- (id)shape;
- (struct Value { struct ValueImpl {} *x1; })value;

@end
