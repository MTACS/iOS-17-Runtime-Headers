
@interface FitnessUI.MindfulnessSessionViewModel : NSObject {
    void duration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  endDate;
    void metadata;
    void mindfulnessSessions;
    void sourceRevision;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  startDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uuid;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSDictionary *metadata;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)metadata;

@end
