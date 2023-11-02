
@interface SNNMILDataValue : SNNMILValue <SNNMILValueRepresentable> {
    NSData * _data;
    unsigned long long  _dataType;
    NSArray * _dimensions;
}

@property (nonatomic, readonly) unsigned long long byteCount;
@property (nonatomic, readonly) void*bytes;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned long long dataType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *dimensions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isScalar;
@property (nonatomic, readonly) long long rank;
@property (nonatomic, readonly) long long scalarCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)byteCount;
- (void*)bytes;
- (id)data;
- (unsigned long long)dataType;
- (id)dimensions;
- (id)initWithScalar:(id)arg1 dataType:(unsigned long long)arg2;
- (id)initWithShape:(id)arg1 bytes:(const void*)arg2 dataType:(unsigned long long)arg3;
- (id)initWithShape:(id)arg1 bytesNoCopy:(void*)arg2 dataType:(unsigned long long)arg3;
- (id)initWithShape:(id)arg1 scalars:(id)arg2 dataType:(unsigned long long)arg3;
- (id)initWithStringScalar:(id)arg1;
- (bool)isScalar;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct __compressed_pair<const MIL::IRValue *, std::default_delete<const MIL::IRValue>> { struct IRValue {} *x_1_1_1; } x1; })milValueWithContext:(id)arg1;
- (long long)rank;
- (long long)scalarCount;

@end
