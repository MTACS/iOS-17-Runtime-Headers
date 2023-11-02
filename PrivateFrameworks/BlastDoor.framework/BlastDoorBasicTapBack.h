
@interface BlastDoorBasicTapBack : NSObject {
    void basicTapBack;
}

@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } associatedMessageRange;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorBasicTapBack_MessageSummaryInfo *messageSummaryInfo;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) NSString *plainTextBody;

- (void).cxx_destruct;
- (id)associatedMessageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })associatedMessageRange;
- (long long)associatedMessageType;
- (id)description;
- (id)init;
- (id)messageSummaryInfo;
- (id)participantDestinationIdentifiers;
- (id)plainTextBody;

@end
