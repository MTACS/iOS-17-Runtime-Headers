
@interface ATXScorableTimeDigestTimeWrapper : NSObject <ATXScorableTimePeriodProtocol> {
    long long  _digestTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long digestTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *legacyScorableTimeIdentifier;
@property (nonatomic, readonly) NSString *scorableTimeIdentifier;
@property (readonly) Class superclass;

- (long long)digestTime;
- (id)init;
- (id)initWithDigestTime:(long long)arg1;
- (id)legacyScorableTimeIdentifier;
- (id)scorableTimeIdentifier;

@end
