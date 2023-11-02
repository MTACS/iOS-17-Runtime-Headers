
@interface ICASSessionDetailData : NSObject <AADataEventType> {
    NSArray * _sessionDetailArray;
}

@property (nonatomic, readonly) NSArray *sessionDetailArray;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithSessionDetailArray:(id)arg1;
- (id)sessionDetailArray;
- (id)toDict;

@end
