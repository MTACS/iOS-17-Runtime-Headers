
@interface DRSSubmitLogRequestMO : DRSRequestMO

@property (nonatomic, copy) NSString *logType;

+ (id)fetchRequest;

@end
