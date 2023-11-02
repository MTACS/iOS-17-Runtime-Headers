
@interface SXLayoutOptions : NSObject {
    long long  _bundleSubscriptionStatus;
    long long  _channelSubscriptionStatus;
    SXColumnLayout * _columnLayout;
    NSSet * _conditionKeys;
    double  _contentScaleFactor;
    NSString * _contentSizeCategory;
    unsigned long long  _newsletterSubscriptionStatus;
    long long  _offerUpsellScenario;
    bool  _smartInvertColorsEnabled;
    long long  _subscriptionActivationEligibility;
    bool  _testing;
    UITraitCollection * _traitCollection;
    unsigned long long  _viewingLocation;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
}

@property (nonatomic, readonly) long long bundleSubscriptionStatus;
@property (nonatomic, readonly) long long channelSubscriptionStatus;
@property (nonatomic, readonly) SXColumnLayout *columnLayout;
@property (nonatomic, readonly) NSSet *conditionKeys;
@property (nonatomic, readonly) double contentScaleFactor;
@property (nonatomic, readonly) NSString *contentSizeCategory;
@property (nonatomic, readonly) unsigned long long newsletterSubscriptionStatus;
@property (nonatomic, readonly) long long offerUpsellScenario;
@property (nonatomic, readonly) bool smartInvertColorsEnabled;
@property (nonatomic, readonly) long long subscriptionActivationEligibility;
@property (nonatomic, readonly) bool testing;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) unsigned long long viewingLocation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (long long)bundleSubscriptionStatus;
- (long long)channelSubscriptionStatus;
- (id)columnLayout;
- (id)conditionKeys;
- (double)contentScaleFactor;
- (id)contentSizeCategory;
- (id)description;
- (unsigned long long)diffWithLayoutOptions:(id)arg1;
- (unsigned long long)hash;
- (id)initWithColumnLayout:(id)arg1 viewportSize:(struct CGSize { double x1; double x2; })arg2 traitCollection:(id)arg3 contentSizeCategory:(id)arg4 bundleSubscriptionStatus:(long long)arg5 channelSubscriptionStatus:(long long)arg6 testing:(bool)arg7 viewingLocation:(unsigned long long)arg8 contentScaleFactor:(double)arg9 newsletterSubscriptionStatus:(unsigned long long)arg10 offerUpsellScenario:(long long)arg11 subscriptionActivationEligibility:(long long)arg12 smartInvertColorsEnabled:(bool)arg13 conditionKeys:(id)arg14;
- (bool)isEqual:(id)arg1;
- (unsigned long long)newsletterSubscriptionStatus;
- (long long)offerUpsellScenario;
- (bool)smartInvertColorsEnabled;
- (long long)subscriptionActivationEligibility;
- (bool)testing;
- (id)traitCollection;
- (unsigned long long)viewingLocation;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
