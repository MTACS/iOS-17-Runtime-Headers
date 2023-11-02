
@interface _DPPrioRecord : NSObject <NSSecureCoding, _DPDediscoRecordProtocol, _DPJSONString, _DPStorageMOConversion> {
    double  _creationDate;
    long long  _dimension;
    NSString * _key;
    NSDictionary * _metadata;
    NSManagedObjectID * _objectId;
    long long  _reportVersion;
    NSData * _share1;
    NSData * _share2;
    bool  _submitted;
}

@property (nonatomic) double creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dimension;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, retain) NSManagedObjectID *objectId;
@property (nonatomic) long long reportVersion;
@property (nonatomic, copy) NSData *share1;
@property (nonatomic, copy) NSData *share2;
@property (nonatomic) bool submitted;
@property (readonly) Class superclass;

+ (id)createRecordFromManagedObject:(id)arg1;
+ (id)entityName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)copyFromManagedObject:(id)arg1;
- (bool)copyToManagedObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)description;
- (long long)dimension;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 share1:(id)arg2 share2:(id)arg3 dimension:(long long)arg4 metadata:(id)arg5 creationDate:(double)arg6 submitted:(bool)arg7 objectId:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPrioRecord:(id)arg1;
- (id)jsonString;
- (id)key;
- (id)metadata;
- (id)objectId;
- (long long)reportVersion;
- (void)setCreationDate:(double)arg1;
- (void)setDimension:(long long)arg1;
- (void)setKey:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setObjectId:(id)arg1;
- (void)setReportVersion:(long long)arg1;
- (void)setShare1:(id)arg1;
- (void)setShare2:(id)arg1;
- (void)setSubmitted:(bool)arg1;
- (id)share1;
- (id)share2;
- (bool)submitted;

@end
