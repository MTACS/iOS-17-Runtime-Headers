
@interface DRSSubmitRapidLogRequestMO : DRSSubmitLogRequestMO

@property (nonatomic, copy) NSNumber *cfDidSucceed;
@property (nonatomic, copy) NSString *cfFailureReason;
@property (nonatomic, retain) NSData *cfReplyPayload;

+ (id)fetchRequest;

@end
