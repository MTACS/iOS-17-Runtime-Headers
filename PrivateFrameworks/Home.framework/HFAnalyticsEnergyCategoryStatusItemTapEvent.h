
@interface HFAnalyticsEnergyCategoryStatusItemTapEvent : HFAnalyticsEvent {
    unsigned long long  _interactionType;
}

@property (nonatomic) unsigned long long interactionType;

- (id)initWithData:(id)arg1;
- (unsigned long long)interactionType;
- (id)payload;
- (void)setInteractionType:(unsigned long long)arg1;

@end
