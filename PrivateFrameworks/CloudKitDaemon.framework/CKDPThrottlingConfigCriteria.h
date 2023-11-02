
@interface CKDPThrottlingConfigCriteria : PBCodable <NSCopying> {
    NSString * _bundleID;
    int  _containerEnvironment;
    NSString * _containerName;
    int  _databaseType;
    struct { 
        unsigned int containerEnvironment : 1; 
        unsigned int databaseType : 1; 
        unsigned int operationType : 1; 
    }  _has;
    NSString * _invernessFunctionName;
    NSString * _invernessServiceName;
    NSString * _operationGroupName;
    int  _operationType;
    NSString * _zoneName;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) int containerEnvironment;
@property (nonatomic, retain) NSString *containerName;
@property (nonatomic) int databaseType;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasContainerEnvironment;
@property (nonatomic, readonly) bool hasContainerName;
@property (nonatomic) bool hasDatabaseType;
@property (nonatomic, readonly) bool hasInvernessFunctionName;
@property (nonatomic, readonly) bool hasInvernessServiceName;
@property (nonatomic, readonly) bool hasOperationGroupName;
@property (nonatomic) bool hasOperationType;
@property (nonatomic, readonly) bool hasZoneName;
@property (nonatomic, retain) NSString *invernessFunctionName;
@property (nonatomic, retain) NSString *invernessServiceName;
@property (nonatomic, retain) NSString *operationGroupName;
@property (nonatomic) int operationType;
@property (nonatomic, retain) NSString *zoneName;

- (void).cxx_destruct;
- (int)StringAsContainerEnvironment:(id)arg1;
- (int)StringAsDatabaseType:(id)arg1;
- (int)StringAsOperationType:(id)arg1;
- (id)bundleID;
- (int)containerEnvironment;
- (id)containerEnvironmentAsString:(int)arg1;
- (id)containerName;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)databaseType;
- (id)databaseTypeAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleID;
- (bool)hasContainerEnvironment;
- (bool)hasContainerName;
- (bool)hasDatabaseType;
- (bool)hasInvernessFunctionName;
- (bool)hasInvernessServiceName;
- (bool)hasOperationGroupName;
- (bool)hasOperationType;
- (bool)hasZoneName;
- (unsigned long long)hash;
- (id)invernessFunctionName;
- (id)invernessServiceName;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)operationGroupName;
- (int)operationType;
- (id)operationTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setContainerEnvironment:(int)arg1;
- (void)setContainerName:(id)arg1;
- (void)setDatabaseType:(int)arg1;
- (void)setHasContainerEnvironment:(bool)arg1;
- (void)setHasDatabaseType:(bool)arg1;
- (void)setHasOperationType:(bool)arg1;
- (void)setInvernessFunctionName:(id)arg1;
- (void)setInvernessServiceName:(id)arg1;
- (void)setOperationGroupName:(id)arg1;
- (void)setOperationType:(int)arg1;
- (void)setZoneName:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneName;

@end
