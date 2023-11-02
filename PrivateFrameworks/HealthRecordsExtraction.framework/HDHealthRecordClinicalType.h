
@interface HDHealthRecordClinicalType : NSObject <NSCopying> {
    NSString * _name;
    long long  _type;
}

@property (nonatomic, readonly) Class medicalRecordClass;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long type;

+ (void)enumerateClinicalTypesUsingBlock:(id /* block */)arg1;
+ (id)nameForClinicalType:(long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithClinicalType:(long long)arg1;
- (id)initWithClinicalTypeName:(id)arg1;
- (Class)medicalRecordClass;
- (id)name;
- (long long)type;

@end
