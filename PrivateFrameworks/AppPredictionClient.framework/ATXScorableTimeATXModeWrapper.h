
@interface ATXScorableTimeATXModeWrapper : NSObject <ATXScorableTimePeriodProtocol, ATXScorableTimePeriodTrainingProtocol> {
    unsigned long long  _atxMode;
}

@property (nonatomic, readonly) unsigned long long atxMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *legacyScorableTimeIdentifier;
@property (nonatomic, readonly) NSString *scorableTimeIdentifier;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

- (unsigned long long)atxMode;
- (id)init;
- (id)initWithATXMode:(unsigned long long)arg1;
- (id)legacyScorableTimeIdentifier;
- (id)scorableTimeIdentifier;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (id)scorableTimeEventProvider;

@end
