
@interface FLTMutableSSUExample : FLTSSUExample

@property (nonatomic, copy) NSObject<FLTBFBufferAccessor><NSCopying> *data;
@property (nonatomic, copy) FLTSSUExampleEncodedVector *dataAsFLTSSUExampleEncodedVector;
@property (nonatomic, copy) FLTSSUExampleUtterance *dataAsFLTSSUExampleUtterance;
@property (nonatomic) long long data_type;

+ (Class)data_mutableClassForType:(long long)arg1;
+ (long long)data_typeForMutableObject:(id)arg1;
+ (long long)data_typeForObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataAsFLTSSUExampleEncodedVector;
- (id)dataAsFLTSSUExampleUtterance;
- (long long)data_type;
- (id)init;
- (void)setData:(id)arg1;
- (void)setDataAsFLTSSUExampleEncodedVector:(id)arg1;
- (void)setDataAsFLTSSUExampleUtterance:(id)arg1;
- (void)setData_type:(long long)arg1;

@end
