
@interface TPSAnalyticsEventLinkAction : TPSAnalyticsEvent {
    NSString * _actionDirection;
    NSString * _actionName;
    NSString * _tipID;
}

@property (nonatomic, retain) NSString *actionDirection;
@property (nonatomic, retain) NSString *actionName;
@property (nonatomic, retain) NSString *tipID;

+ (id)eventWithTipID:(id)arg1 actionName:(id)arg2 actionDirection:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTipID:(id)arg1 actionName:(id)arg2 actionDirection:(id)arg3;
- (id)actionDirection;
- (id)actionName;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (void)setActionDirection:(id)arg1;
- (void)setActionName:(id)arg1;
- (void)setTipID:(id)arg1;
- (id)tipID;

@end
