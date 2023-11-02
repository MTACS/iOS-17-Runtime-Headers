
@interface ADSponsoredSearchRequest : PBRequest <NSCopying> {
    bool  _clientExclusive;
    NSString * _deploymentID;
    bool  _enableImagesForDupes;
    NSString * _experimentID;
    struct { 
        unsigned int supportedODMLVersion : 1; 
        unsigned int clientExclusive : 1; 
        unsigned int enableImagesForDupes : 1; 
        unsigned int inAllocation : 1; 
        unsigned int isBaseline : 1; 
        unsigned int isTest : 1; 
    }  _has;
    bool  _inAllocation;
    bool  _isBaseline;
    bool  _isTest;
    ADUserTargetingProperties * _properties;
    int  _supportedODMLVersion;
    NSString * _treatmentID;
}

@property (nonatomic) bool clientExclusive;
@property (nonatomic, retain) NSString *deploymentID;
@property (nonatomic) bool enableImagesForDupes;
@property (nonatomic, retain) NSString *experimentID;
@property (nonatomic) bool hasClientExclusive;
@property (nonatomic, readonly) bool hasDeploymentID;
@property (nonatomic) bool hasEnableImagesForDupes;
@property (nonatomic, readonly) bool hasExperimentID;
@property (nonatomic) bool hasInAllocation;
@property (nonatomic) bool hasIsBaseline;
@property (nonatomic) bool hasIsTest;
@property (nonatomic, readonly) bool hasProperties;
@property (nonatomic) bool hasSupportedODMLVersion;
@property (nonatomic, readonly) bool hasTreatmentID;
@property (nonatomic) bool inAllocation;
@property (nonatomic) bool isBaseline;
@property (nonatomic) bool isTest;
@property (nonatomic, retain) ADUserTargetingProperties *properties;
@property (nonatomic) int supportedODMLVersion;
@property (nonatomic, retain) NSString *treatmentID;

+ (id)options;

- (void).cxx_destruct;
- (bool)clientExclusive;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deploymentID;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enableImagesForDupes;
- (id)experimentID;
- (bool)hasClientExclusive;
- (bool)hasDeploymentID;
- (bool)hasEnableImagesForDupes;
- (bool)hasExperimentID;
- (bool)hasInAllocation;
- (bool)hasIsBaseline;
- (bool)hasIsTest;
- (bool)hasProperties;
- (bool)hasSupportedODMLVersion;
- (bool)hasTreatmentID;
- (unsigned long long)hash;
- (bool)inAllocation;
- (bool)isBaseline;
- (bool)isEqual:(id)arg1;
- (bool)isTest;
- (void)mergeFrom:(id)arg1;
- (id)properties;
- (bool)readFrom:(id)arg1;
- (void)setClientExclusive:(bool)arg1;
- (void)setDeploymentID:(id)arg1;
- (void)setEnableImagesForDupes:(bool)arg1;
- (void)setExperimentID:(id)arg1;
- (void)setHasClientExclusive:(bool)arg1;
- (void)setHasEnableImagesForDupes:(bool)arg1;
- (void)setHasInAllocation:(bool)arg1;
- (void)setHasIsBaseline:(bool)arg1;
- (void)setHasIsTest:(bool)arg1;
- (void)setHasSupportedODMLVersion:(bool)arg1;
- (void)setInAllocation:(bool)arg1;
- (void)setIsBaseline:(bool)arg1;
- (void)setIsTest:(bool)arg1;
- (void)setProperties:(id)arg1;
- (void)setSupportedODMLVersion:(int)arg1;
- (void)setTreatmentID:(id)arg1;
- (int)supportedODMLVersion;
- (id)treatmentID;
- (void)writeTo:(id)arg1;

@end
