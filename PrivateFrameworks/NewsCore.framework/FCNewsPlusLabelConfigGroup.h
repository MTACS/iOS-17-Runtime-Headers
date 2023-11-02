
@interface FCNewsPlusLabelConfigGroup : NSObject {
    FCNewsPlusLabelConfig * _configForPaidBundleViaOffer;
    FCNewsPlusLabelConfig * _configForSubscribers;
    FCNewsPlusLabelConfig * _configForTrialists;
}

@property (nonatomic, readonly) FCNewsPlusLabelConfig *configForPaidBundleViaOffer;
@property (nonatomic, readonly) FCNewsPlusLabelConfig *configForSubscribers;
@property (nonatomic, readonly) FCNewsPlusLabelConfig *configForTrialists;

- (void).cxx_destruct;
- (id)configForPaidBundleViaOffer;
- (id)configForSubscribers;
- (id)configForTrialists;
- (id)initWithConfigDictionary:(id)arg1;

@end
