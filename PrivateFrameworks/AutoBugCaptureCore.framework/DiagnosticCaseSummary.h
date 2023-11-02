
@interface DiagnosticCaseSummary : NSManagedObject

@property (nonatomic, retain) NSString *buildVariant;
@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, retain) NSString *caseAttachments;
@property (nonatomic, retain) NSDate *caseClosedTime;
@property (nonatomic) short caseClosureType;
@property (nonatomic, retain) NSString *caseContext;
@property (nonatomic, retain) NSDate *caseCreatedTime;
@property (nonatomic) short caseDampeningType;
@property (nonatomic, retain) NSString *caseDetectedProcess;
@property (nonatomic, retain) NSString *caseDomain;
@property (nonatomic, retain) NSString *caseEffectiveProcess;
@property (nonatomic, retain) NSString *caseGroupID;
@property (nonatomic, retain) NSString *caseID;
@property (nonatomic, retain) NSString *caseRelatedProcesses;
@property (nonatomic, retain) NSString *caseSubtype;
@property (nonatomic, retain) NSString *caseSubtypeContext;
@property (nonatomic) short caseSummaryState;
@property (nonatomic, retain) NSString *caseThresholdValues;
@property (nonatomic, retain) NSString *caseType;
@property (nonatomic) bool remoteTrigger;

@end
