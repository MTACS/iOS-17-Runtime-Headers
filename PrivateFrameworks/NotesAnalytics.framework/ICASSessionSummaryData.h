
@interface ICASSessionSummaryData : NSObject <AADataEventType> {
    NSArray * _sessionSummaryArray;
}

@property (nonatomic, readonly) NSArray *sessionSummaryArray;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithSessionSummaryArray:(id)arg1;
- (id)sessionSummaryArray;
- (id)toDict;

@end
