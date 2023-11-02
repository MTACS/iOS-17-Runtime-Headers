
@interface C2MPDeviceInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int isAppleInternal : 1; 
    }  _has;
    NSMutableArray * _internalTestConfigs;
    bool  _isAppleInternal;
    NSString * _processName;
    NSString * _processUuid;
    NSString * _processVersion;
    NSString * _productBuild;
    NSString * _productName;
    NSString * _productType;
    NSString * _productVersion;
    NSString * _userDefaultTestName;
}

@property (nonatomic) bool hasIsAppleInternal;
@property (nonatomic, readonly) bool hasProcessName;
@property (nonatomic, readonly) bool hasProcessUuid;
@property (nonatomic, readonly) bool hasProcessVersion;
@property (nonatomic, readonly) bool hasProductBuild;
@property (nonatomic, readonly) bool hasProductName;
@property (nonatomic, readonly) bool hasProductType;
@property (nonatomic, readonly) bool hasProductVersion;
@property (nonatomic, readonly) bool hasUserDefaultTestName;
@property (nonatomic, retain) NSMutableArray *internalTestConfigs;
@property (nonatomic) bool isAppleInternal;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic, retain) NSString *processUuid;
@property (nonatomic, retain) NSString *processVersion;
@property (nonatomic, retain) NSString *productBuild;
@property (nonatomic, retain) NSString *productName;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic, retain) NSString *productVersion;
@property (nonatomic, retain) NSString *userDefaultTestName;

+ (Class)internalTestConfigType;

- (void).cxx_destruct;
- (void)addInternalTestConfig:(id)arg1;
- (void)clearInternalTestConfigs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsAppleInternal;
- (bool)hasProcessName;
- (bool)hasProcessUuid;
- (bool)hasProcessVersion;
- (bool)hasProductBuild;
- (bool)hasProductName;
- (bool)hasProductType;
- (bool)hasProductVersion;
- (bool)hasUserDefaultTestName;
- (unsigned long long)hash;
- (id)internalTestConfigAtIndex:(unsigned long long)arg1;
- (id)internalTestConfigs;
- (unsigned long long)internalTestConfigsCount;
- (bool)isAppleInternal;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)processName;
- (id)processUuid;
- (id)processVersion;
- (id)productBuild;
- (id)productName;
- (id)productType;
- (id)productVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasIsAppleInternal:(bool)arg1;
- (void)setInternalTestConfigs:(id)arg1;
- (void)setIsAppleInternal:(bool)arg1;
- (void)setProcessName:(id)arg1;
- (void)setProcessUuid:(id)arg1;
- (void)setProcessVersion:(id)arg1;
- (void)setProductBuild:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setUserDefaultTestName:(id)arg1;
- (id)userDefaultTestName;
- (void)writeTo:(id)arg1;

@end
