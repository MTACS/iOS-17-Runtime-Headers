
@interface ICASPartialCloudErrorData : NSObject <AADataEventType> {
    NSArray * _partialErrorSummary;
}

@property (nonatomic, readonly) NSArray *partialErrorSummary;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithPartialErrorSummary:(id)arg1;
- (id)partialErrorSummary;
- (id)toDict;

@end
