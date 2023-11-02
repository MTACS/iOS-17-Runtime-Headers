
@interface SiriInvocationAnalytics.THKTaskEvent : NSObject {
    void id;
    void timeIntervalSinceReferenceDate;
}

@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) double timeIntervalSinceReferenceDate;

- (void).cxx_destruct;
- (id)id;
- (id)init;
- (double)timeIntervalSinceReferenceDate;

@end
