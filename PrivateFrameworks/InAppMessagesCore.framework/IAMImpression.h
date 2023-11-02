
@interface IAMImpression : NSObject {
    NSDate * _displayEndTime;
    NSDate * _displayStartTime;
    ICInAppMessageEntry * _messageEntry;
    NSString * _targetIdentifier;
}

@property (nonatomic, copy) NSDate *displayEndTime;
@property (nonatomic, copy) NSDate *displayStartTime;
@property (nonatomic, copy) ICInAppMessageEntry *messageEntry;
@property (nonatomic, readonly) NSString *messageIdentifier;
@property (nonatomic, readonly) int messageType;
@property (nonatomic, copy) NSString *targetIdentifier;

- (void).cxx_destruct;
- (id)displayEndTime;
- (id)displayStartTime;
- (id)initWithMessageEntry:(id)arg1 targetIdentifier:(id)arg2;
- (id)messageEntry;
- (id)messageIdentifier;
- (int)messageType;
- (id)reportableMetricsEventDictionary;
- (void)setDisplayEndTime:(id)arg1;
- (void)setDisplayStartTime:(id)arg1;
- (void)setMessageEntry:(id)arg1;
- (void)setTargetIdentifier:(id)arg1;
- (id)targetIdentifier;

@end
