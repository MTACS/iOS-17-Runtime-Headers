
@interface _DPBitValueRecord : NSObject <NSSecureCoding, _DPJSONString, _DPStorageMOConversion> {
    short  _clearBitValue;
    double  _creationDate;
    NSString * _key;
    NSManagedObjectID * _objectId;
    NSString * _privateBitValueStr;
    long long  _reportVersion;
    bool  _submitted;
}

@property (nonatomic) short clearBitValue;
@property (nonatomic) double creationDate;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, retain) NSManagedObjectID *objectId;
@property (nonatomic, copy) NSString *privateBitValueStr;
@property (nonatomic) long long reportVersion;
@property (nonatomic) bool submitted;

+ (id)createRecordFromManagedObject:(id)arg1;
+ (id)entityName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (short)clearBitValue;
- (bool)copyFromManagedObject:(id)arg1;
- (bool)copyToManagedObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 clearBitValue:(short)arg2 privateBitValueStr:(id)arg3 creationDate:(double)arg4 submitted:(bool)arg5 objectId:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBitValueRecord:(id)arg1;
- (id)jsonString;
- (id)key;
- (id)objectId;
- (id)privateBitValueStr;
- (long long)reportVersion;
- (void)setClearBitValue:(short)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setKey:(id)arg1;
- (void)setObjectId:(id)arg1;
- (void)setPrivateBitValueStr:(id)arg1;
- (void)setReportVersion:(long long)arg1;
- (void)setSubmitted:(bool)arg1;
- (bool)submitted;

@end
