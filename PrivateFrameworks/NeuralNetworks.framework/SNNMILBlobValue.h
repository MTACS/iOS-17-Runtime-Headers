
@interface SNNMILBlobValue : SNNMILValue <SNNMILValueRepresentable> {
    unsigned long long  _dataType;
    NSArray * _dimensions;
    NSString * _filename;
    NSNumber * _offset;
}

@property (nonatomic, readonly) unsigned long long dataType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *dimensions;
@property (nonatomic, readonly) NSString *filename;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) NSNumber *offset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)dataType;
- (id)dimensions;
- (id)filename;
- (id)initWithFilename:(id)arg1 shape:(id)arg2 dataType:(unsigned long long)arg3 offset:(id)arg4;
- (unsigned long long)length;
- (struct unique_ptr<const MIL::IRValue, std::default_delete<const MIL::IRValue>> { struct __compressed_pair<const MIL::IRValue *, std::default_delete<const MIL::IRValue>> { struct IRValue {} *x_1_1_1; } x1; })milValueWithContext:(id)arg1;
- (id)offset;

@end
