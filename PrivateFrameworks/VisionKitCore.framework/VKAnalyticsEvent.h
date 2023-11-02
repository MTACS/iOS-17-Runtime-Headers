
@interface VKAnalyticsEvent : NSObject {
    NSString * _bundleIdentifier;
    NSDate * _date;
    bool  _isPerformingAutomatedTest;
}

@property (nonatomic, readonly) VKAnalyticsAnalyzerEvent *analyzerEvent;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) VKAnalyticsDataScannerEvent *dataScannerEvent;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) VKAnalyticsDDEvent *ddEvent;
@property (nonatomic, readonly) VKAnalyticsInteractionEvent *interactionEvent;
@property (nonatomic, readonly) bool isPerformingAutomatedTest;
@property (nonatomic, readonly) VKAnalyticsMRCEvent *mrcEvent;
@property (nonatomic, readonly) VKAnalyticsQuickActionEvent *quickActionEvent;
@property (nonatomic, readonly) VKAnalyticsSubjectEvent *subjectEvent;
@property (nonatomic, readonly) VKAnalyticsTextEvent *textEvent;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) VKAnalyticsVisualSearchEvent *visualSearchEvent;

- (void).cxx_destruct;
- (id)analyzerEvent;
- (id)bundleIdentifier;
- (id)coreAnalyticsDictionary;
- (id)dataScannerEvent;
- (id)date;
- (id)ddEvent;
- (id)eventKey;
- (id)initWithCustomIdentifier:(id)arg1;
- (id)interactionEvent;
- (bool)isPerformingAutomatedTest;
- (id)mrcEvent;
- (id)quickActionEvent;
- (void)setBundleIdentifier:(id)arg1;
- (id)subjectEvent;
- (id)textEvent;
- (long long)type;
- (id)visualSearchEvent;

@end
