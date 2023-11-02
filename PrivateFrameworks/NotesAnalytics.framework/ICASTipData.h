
@interface ICASTipData : NSObject <AADataEventType> {
    NSString * _tipFeature;
}

@property (nonatomic, readonly) NSString *tipFeature;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithTipFeature:(id)arg1;
- (id)tipFeature;
- (id)toDict;

@end
