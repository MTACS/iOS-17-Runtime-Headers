
@interface _DPBSSFPRecord : NSObject <NSSecureCoding, _DPJSONString, _DPStorageMOConversion> {
    double  _creationDate;
    NSString * _key;
    NSManagedObjectID * _objectId;
    NSString * _privateValue;
    long long  _reportVersion;
    long long  _segmentIndex;
    bool  _submitted;
    NSString * _tableVersion;
    bool  _verificationMode;
}

@property (nonatomic) double creationDate;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, retain) NSManagedObjectID *objectId;
@property (nonatomic, copy) NSString *privateValue;
@property (nonatomic) long long reportVersion;
@property (nonatomic) long long segmentIndex;
@property (nonatomic) bool submitted;
@property (nonatomic, copy) NSString *tableVersion;
@property (nonatomic) bool verificationMode;

+ (id)createRecordFromManagedObject:(id)arg1;
+ (id)entityName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
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
- (id)initWithKey:(id)arg1 privateValue:(id)arg2 tableVersion:(id)arg3 segmentIndex:(long long)arg4 verificationMode:(bool)arg5 creationDate:(double)arg6 submitted:(bool)arg7 objectId:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBSSFPRecord:(id)arg1;
- (id)jsonString;
- (id)key;
- (id)objectId;
- (id)privateValue;
- (long long)reportVersion;
- (long long)segmentIndex;
- (void)setCreationDate:(double)arg1;
- (void)setKey:(id)arg1;
- (void)setObjectId:(id)arg1;
- (void)setPrivateValue:(id)arg1;
- (void)setReportVersion:(long long)arg1;
- (void)setSegmentIndex:(long long)arg1;
- (void)setSubmitted:(bool)arg1;
- (void)setTableVersion:(id)arg1;
- (void)setVerificationMode:(bool)arg1;
- (bool)submitted;
- (id)tableVersion;
- (bool)verificationMode;

@end
