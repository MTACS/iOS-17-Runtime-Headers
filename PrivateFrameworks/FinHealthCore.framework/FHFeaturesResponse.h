
@interface FHFeaturesResponse : NSObject <NSSecureCoding> {
    NSArray * _aggregateFeatures;
    NSArray * _aggregateFeaturesWithProcessingWindow;
    NSArray * _compoundFeatures;
    NSArray * _smartFeatures;
    NSString * _transactionIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *aggregateFeatures;
@property (nonatomic, readonly, copy) NSArray *aggregateFeaturesWithProcessingWindow;
@property (nonatomic, readonly, copy) NSArray *compoundFeatures;
@property (nonatomic, readonly, copy) NSArray *smartFeatures;
@property (nonatomic, readonly, copy) NSString *transactionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aggregateFeatures;
- (id)aggregateFeaturesWithProcessingWindow;
- (id)compoundFeatures;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSmartFeatures:(id)arg1 aggregateFeatureswithProcessingWindow:(id)arg2 compoundFeatures:(id)arg3 transactionID:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)smartFeatures;
- (id)transactionIdentifier;

@end
