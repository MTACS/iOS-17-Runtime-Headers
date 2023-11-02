
@interface HFAnalyticsEnergyCategoryViewAccessedFromURLEvent : HFAnalyticsEvent {
    NSString * _fromUIView;
}

@property (nonatomic, retain) NSString *fromUIView;

- (void).cxx_destruct;
- (id)fromUIView;
- (id)initWithData:(id)arg1;
- (id)payload;
- (void)setFromUIView:(id)arg1;

@end
