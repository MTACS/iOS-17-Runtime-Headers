
@interface INFERENCESchemaINFERENCECommonAppDependentSignals : SISchemaInstrumentationMessage {
    NSString * _appBundleId;
    INFERENCESchemaINFERENCECommonAppDependentEntityFrequencyAndRecencySignals * _appDependentEntityFrequencyAndRecencySignals;
    INFERENCESchemaINFERENCECommonAppDependentFrequencyAndRecencySignals * _appDependentFrequencyAndRecencySignals;
    float  _appScoreFromModel;
    double  _compoundActiveBundleScore;
    struct { 
        unsigned int isFirstPartyBundle : 1; 
        unsigned int isForegroundApp : 1; 
        unsigned int isResolvedApp : 1; 
        unsigned int appScoreFromModel : 1; 
        unsigned int compoundActiveBundleScore : 1; 
        unsigned int totalTimeSpentByUserInAppPerDay : 1; 
        unsigned int timeSpentByUserInAppToday : 1; 
        unsigned int timeSinceAppLastLaunchedInSec : 1; 
    }  _has;
    bool  _hasAppBundleId;
    bool  _hasAppDependentEntityFrequencyAndRecencySignals;
    bool  _hasAppDependentFrequencyAndRecencySignals;
    bool  _isFirstPartyBundle;
    bool  _isForegroundApp;
    bool  _isResolvedApp;
    int  _timeSinceAppLastLaunchedInSec;
    unsigned int  _timeSpentByUserInAppToday;
    unsigned int  _totalTimeSpentByUserInAppPerDay;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, retain) INFERENCESchemaINFERENCECommonAppDependentEntityFrequencyAndRecencySignals *appDependentEntityFrequencyAndRecencySignals;
@property (nonatomic, retain) INFERENCESchemaINFERENCECommonAppDependentFrequencyAndRecencySignals *appDependentFrequencyAndRecencySignals;
@property (nonatomic) float appScoreFromModel;
@property (nonatomic) double compoundActiveBundleScore;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) bool hasAppBundleId;
@property (nonatomic) bool hasAppDependentEntityFrequencyAndRecencySignals;
@property (nonatomic) bool hasAppDependentFrequencyAndRecencySignals;
@property (nonatomic) bool hasAppScoreFromModel;
@property (nonatomic) bool hasCompoundActiveBundleScore;
@property (nonatomic) bool hasIsFirstPartyBundle;
@property (nonatomic) bool hasIsForegroundApp;
@property (nonatomic) bool hasIsResolvedApp;
@property (nonatomic) bool hasTimeSinceAppLastLaunchedInSec;
@property (nonatomic) bool hasTimeSpentByUserInAppToday;
@property (nonatomic) bool hasTotalTimeSpentByUserInAppPerDay;
@property (nonatomic) bool isFirstPartyBundle;
@property (nonatomic) bool isForegroundApp;
@property (nonatomic) bool isResolvedApp;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int timeSinceAppLastLaunchedInSec;
@property (nonatomic) unsigned int timeSpentByUserInAppToday;
@property (nonatomic) unsigned int totalTimeSpentByUserInAppPerDay;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (id)appBundleId;
- (id)appDependentEntityFrequencyAndRecencySignals;
- (id)appDependentFrequencyAndRecencySignals;
- (float)appScoreFromModel;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (double)compoundActiveBundleScore;
- (void)deleteAppBundleId;
- (void)deleteAppDependentEntityFrequencyAndRecencySignals;
- (void)deleteAppDependentFrequencyAndRecencySignals;
- (void)deleteAppScoreFromModel;
- (void)deleteCompoundActiveBundleScore;
- (void)deleteIsFirstPartyBundle;
- (void)deleteIsForegroundApp;
- (void)deleteIsResolvedApp;
- (void)deleteTimeSinceAppLastLaunchedInSec;
- (void)deleteTimeSpentByUserInAppToday;
- (void)deleteTotalTimeSpentByUserInAppPerDay;
- (id)dictionaryRepresentation;
- (bool)hasAppBundleId;
- (bool)hasAppDependentEntityFrequencyAndRecencySignals;
- (bool)hasAppDependentFrequencyAndRecencySignals;
- (bool)hasAppScoreFromModel;
- (bool)hasCompoundActiveBundleScore;
- (bool)hasIsFirstPartyBundle;
- (bool)hasIsForegroundApp;
- (bool)hasIsResolvedApp;
- (bool)hasTimeSinceAppLastLaunchedInSec;
- (bool)hasTimeSpentByUserInAppToday;
- (bool)hasTotalTimeSpentByUserInAppPerDay;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFirstPartyBundle;
- (bool)isForegroundApp;
- (bool)isResolvedApp;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setAppDependentEntityFrequencyAndRecencySignals:(id)arg1;
- (void)setAppDependentFrequencyAndRecencySignals:(id)arg1;
- (void)setAppScoreFromModel:(float)arg1;
- (void)setCompoundActiveBundleScore:(double)arg1;
- (void)setHasAppBundleId:(bool)arg1;
- (void)setHasAppDependentEntityFrequencyAndRecencySignals:(bool)arg1;
- (void)setHasAppDependentFrequencyAndRecencySignals:(bool)arg1;
- (void)setHasAppScoreFromModel:(bool)arg1;
- (void)setHasCompoundActiveBundleScore:(bool)arg1;
- (void)setHasIsFirstPartyBundle:(bool)arg1;
- (void)setHasIsForegroundApp:(bool)arg1;
- (void)setHasIsResolvedApp:(bool)arg1;
- (void)setHasTimeSinceAppLastLaunchedInSec:(bool)arg1;
- (void)setHasTimeSpentByUserInAppToday:(bool)arg1;
- (void)setHasTotalTimeSpentByUserInAppPerDay:(bool)arg1;
- (void)setIsFirstPartyBundle:(bool)arg1;
- (void)setIsForegroundApp:(bool)arg1;
- (void)setIsResolvedApp:(bool)arg1;
- (void)setTimeSinceAppLastLaunchedInSec:(int)arg1;
- (void)setTimeSpentByUserInAppToday:(unsigned int)arg1;
- (void)setTotalTimeSpentByUserInAppPerDay:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (int)timeSinceAppLastLaunchedInSec;
- (unsigned int)timeSpentByUserInAppToday;
- (unsigned int)totalTimeSpentByUserInAppPerDay;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriSignals.framework/SiriSignals

- (id)description;

@end
