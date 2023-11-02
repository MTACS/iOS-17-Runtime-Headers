
@interface PPTrialWrapperGuardedData : NSObject {
    NSString * concatenatedTreatmentNames;
    NSDate * mostRecentUpdateDate;
    NSMutableArray * notificationTokens;
    NSMutableDictionary * pathOverrides;
    TRITrackingId * trackingId;
    unsigned int  treatmentsHash;
}

- (void).cxx_destruct;

@end
