
@interface DiagnosticCaseUsage : NSManagedObject

@property (nonatomic) int casesAccepted;
@property (nonatomic) int casesSeen;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) double interarrival_mean;
@property (nonatomic) double interarrival_var;
@property (nonatomic, retain) NSDate *lastAccepted;
@property (nonatomic, retain) NSDate *lastSeen;
@property (nonatomic, retain) NSString *process;
@property (nonatomic, retain) NSString *subtype;
@property (nonatomic, retain) NSString *type;

@end
