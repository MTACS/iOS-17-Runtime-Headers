
@interface ICASTipLearnMoreData : NSObject <AADataEventType> {
    NSString * _learnMoreTipName;
    NSString * _tipFeature;
}

@property (nonatomic, readonly) NSString *learnMoreTipName;
@property (nonatomic, readonly) NSString *tipFeature;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithLearnMoreTipName:(id)arg1 tipFeature:(id)arg2;
- (id)learnMoreTipName;
- (id)tipFeature;
- (id)toDict;

@end
