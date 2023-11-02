
@interface NUContentAnalyticsEvent : NSObject <NUAnalyticsEvent> {
    SXAnalyticsEvent * _event;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXAnalyticsEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)event;
- (id)initWithEvent:(id)arg1;

@end
