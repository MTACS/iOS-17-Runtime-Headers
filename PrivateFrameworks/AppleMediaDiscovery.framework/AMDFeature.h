
@interface AMDFeature : NSObject {
    NSMutableArray * __actualShape;
    long long  __dataType;
    <PostRemapOperation> * __postRemapOperation;
    id  __remapInfo;
    NSArray * __shape;
    id  __value;
}

@property (nonatomic, retain) NSMutableArray *_actualShape;
@property (nonatomic) long long _dataType;
@property (nonatomic, retain) <PostRemapOperation> *_postRemapOperation;
@property (nonatomic, retain) id _remapInfo;
@property (nonatomic, retain) NSArray *_shape;
@property (nonatomic, retain) id _value;

+ (void)copyDoubleValues:(int)arg1 fromArray:(id)arg2 toBuffer:(double*)arg3 withDefaultValue:(double)arg4 withRemapDictionary:(id)arg5 andPostRemapOperation:(id)arg6;
+ (void)copyFloat32Values:(int)arg1 fromArray:(id)arg2 toBuffer:(float*)arg3 withDefaultValue:(float)arg4 withRemapDictionary:(id)arg5 andPostRemapOperation:(id)arg6;
+ (void)copyInt32Values:(int)arg1 fromArray:(id)arg2 toBuffer:(int*)arg3 withDefaultValue:(int)arg4 withRemapData:(id)arg5 andPostRemapOperation:(id)arg6;
+ (void)copyInt32Values:(int)arg1 fromArray:(id)arg2 toBuffer:(int*)arg3 withDefaultValue:(int)arg4 withRemapDictionary:(id)arg5 andPostRemapOperation:(id)arg6;
+ (void)copyInt32Values:(int)arg1 fromArray:(id)arg2 toBuffer:(int*)arg3 withDefaultValue:(int)arg4 withRemapInfo:(id)arg5 andPostRemapOperation:(id)arg6;
+ (id)featureFromValue:(id)arg1;
+ (bool)getDoubleFromObject:(id)arg1 copyToValue:(double*)arg2 withRemapDictionary:(id)arg3 andPostRemapOperation:(id)arg4;
+ (bool)getFloatFromObject:(id)arg1 copyToValue:(float*)arg2 withRemapDictionary:(id)arg3 andPostRemapOperation:(id)arg4;
+ (bool)getIntFromObject:(id)arg1 copyToValue:(int*)arg2 withRemapDictionary:(id)arg3 andPostRemapOperation:(id)arg4;

- (void).cxx_destruct;
- (id)_actualShape;
- (long long)_dataType;
- (id)_postRemapOperation;
- (id)_remapInfo;
- (id)_shape;
- (id)_value;
- (void)copyDoubleValues:(int)arg1 toBuffer:(double*)arg2 withDefaultValue:(double)arg3 withMapOp:(id)arg4 withRemapDictionary:(id)arg5 andPostRemapOperation:(id)arg6;
- (void)copyFloat32Values:(int)arg1 toBuffer:(float*)arg2 withDefaultValue:(float)arg3 withMapOp:(id)arg4 withRemapDictionary:(id)arg5 andPostRemapOperation:(id)arg6;
- (void)copyInt32Values:(int)arg1 toBuffer:(int*)arg2 withDefaultValue:(int)arg3 withMapOp:(id)arg4 withRemapDictionary:(id)arg5 andPostRemapOperation:(id)arg6;
- (void)copyInt32Values:(int)arg1 toBuffer:(int*)arg2 withDefaultValue:(int)arg3 withMapOp:(id)arg4 withRemapInfo:(id)arg5 andPostRemapOperation:(id)arg6;
- (unsigned long long)getCount;
- (long long)getDataType;
- (id)getPostRemapOperation;
- (id)getRemapInfo;
- (id)getShape;
- (id)getValue;
- (id)initWithValue:(id)arg1;
- (void)setDataType:(long long)arg1;
- (void)setPostRemapOperation:(id)arg1;
- (void)setRemapInfo:(id)arg1;
- (void)setShape:(id)arg1;
- (void)set_actualShape:(id)arg1;
- (void)set_dataType:(long long)arg1;
- (void)set_postRemapOperation:(id)arg1;
- (void)set_remapInfo:(id)arg1;
- (void)set_shape:(id)arg1;
- (void)set_value:(id)arg1;
- (id)stringValue;

@end
