
@interface SNNMILValueDescriptor : SNNMILValue {
    unsigned long long  _dataType;
    NSArray * _dimensions;
    NSString * _name;
}

@property (nonatomic, readonly) unsigned long long dataType;
@property (nonatomic, readonly) NSArray *dimensions;
@property (nonatomic, readonly) bool isScalar;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (unsigned long long)dataType;
- (id)dimensions;
- (id)initWithShape:(id)arg1 dataType:(unsigned long long)arg2;
- (id)initWithShape:(id)arg1 dataType:(unsigned long long)arg2 name:(id)arg3;
- (bool)isScalar;
- (id)name;

@end
