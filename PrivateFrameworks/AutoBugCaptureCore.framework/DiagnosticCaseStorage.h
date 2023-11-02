
@interface DiagnosticCaseStorage : NSManagedObject

@property (nonatomic) bool attachmentsIncomplete;
@property (nonatomic, retain) NSString *buildVariant;
@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, retain) NSString *caseAttachments;
@property (nonatomic, retain) NSDate *caseClosedTime;
@property (nonatomic) short caseClosureType;
@property (nonatomic, retain) NSString *caseContext;
@property (nonatomic) short caseDampeningType;
@property (nonatomic, retain) NSString *caseDetectedProcess;
@property (nonatomic, retain) NSString *caseDomain;
@property (nonatomic, retain) NSString *caseEffectiveProcess;
@property (nonatomic, retain) NSString *caseEvents;
@property (nonatomic, retain) NSString *caseGroupID;
@property (nonatomic, retain) NSString *caseID;
@property (nonatomic, retain) NSString *caseObjectVersion;
@property (nonatomic, retain) NSString *casePayloads;
@property (nonatomic, retain) NSString *caseRelatedProcesses;
@property (nonatomic) short caseState;
@property (nonatomic, retain) NSString *caseSubtype;
@property (nonatomic, retain) NSString *caseSubtypeContext;
@property (nonatomic, retain) NSString *caseThresholdValues;
@property (nonatomic, retain) NSString *caseType;
@property (nonatomic) bool remoteTrigger;
@property (nonatomic, retain) NSDate *timeStamp;
@property (nonatomic, retain) UploadRecord *uploadRecord;
@property (nonatomic) short uploadState;

@end
