
@interface HFAnalyticsLearnTabInteractionEvent : HFAnalyticsEvent {
    NSString * _interactionType;
}

@property (nonatomic, retain) NSString *interactionType;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)interactionType;
- (id)payload;
- (void)setInteractionType:(id)arg1;

@end
