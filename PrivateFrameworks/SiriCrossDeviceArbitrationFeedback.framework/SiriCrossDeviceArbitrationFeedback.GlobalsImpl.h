
@interface SiriCrossDeviceArbitrationFeedback.GlobalsImpl : NSObject <SiriCrossDeviceArbitrationFeedback.Globals> {
    void historyLengthSeconds;
    void localDeviceAssistantIdentifier;
}

@property (nonatomic) double historyLengthSeconds;
@property (nonatomic, readonly) bool isInternalInstall;
@property (nonatomic, copy) NSString *localDeviceAssistantIdentifier;

+ (id)shared;

- (void).cxx_destruct;
- (double)historyLengthSeconds;
- (id)init;
- (bool)isInternalInstall;
- (id)localDeviceAssistantIdentifier;
- (void)setHistoryLengthSeconds:(double)arg1;
- (void)setLocalDeviceAssistantIdentifier:(id)arg1;

@end
