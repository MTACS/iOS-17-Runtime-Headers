
@interface BlastDoorTapBack : NSObject {
    void tapBack;
}

@property (nonatomic, readonly) NSString *associatedMessageFallbackHash;
@property (nonatomic, readonly) NSString *associatedMessageGUID;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } associatedMessageRange;
@property (nonatomic, readonly) long long associatedMessageType;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorTapBack_MessageSummaryInfo *messageSummaryInfo;
@property (nonatomic, readonly) NSArray *participantDestinationIdentifiers;
@property (nonatomic, readonly) NSString *plainTextBody;

- (void).cxx_destruct;
- (id)associatedMessageFallbackHash;
- (id)associatedMessageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })associatedMessageRange;
- (long long)associatedMessageType;
- (id)description;
- (id)init;
- (id)messageSummaryInfo;
- (id)participantDestinationIdentifiers;
- (id)plainTextBody;

@end
