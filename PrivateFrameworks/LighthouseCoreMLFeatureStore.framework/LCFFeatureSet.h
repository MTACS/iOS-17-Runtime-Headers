
@interface LCFFeatureSet : NSObject {
    NSDictionary * _featureValues;
    NSNumber * _featureVersion;
    NSString * _itemIdentifier;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) NSDictionary *featureValues;
@property (nonatomic, readonly) NSNumber *featureVersion;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) NSDate *timestamp;

- (void).cxx_destruct;
- (id)featureValues;
- (id)featureVersion;
- (id)initWithIdentifier:(id)arg1 featureVersion:(id)arg2 timestamp:(id)arg3 featureValues:(id)arg4;
- (id)itemIdentifier;
- (id)timestamp;

@end
