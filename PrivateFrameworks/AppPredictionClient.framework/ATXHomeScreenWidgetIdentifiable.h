
@interface ATXHomeScreenWidgetIdentifiable : NSObject <ATXMemoryPressureObserver, ATXProtoBufWrapper, NSSecureCoding> {
    NSString * _appBundleId;
    NSString * _extensionBundleId;
    INIntent * _intent;
    NSData * _intentProtoData;
    ATXMemoryPressureMonitor * _memoryPressureMonitor;
    bool  _onboardingWidget;
    ATXHomeScreenPage * _page;
    NSString * _predictionSource;
    bool  _requiresAppLaunch;
    double  _score;
    unsigned long long  _size;
    bool  _suggestedWidget;
    NSString * _widgetKind;
    NSString * _widgetUniqueId;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *extensionBundleId;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) INIntent *intent;
@property (getter=isOnboardingWidget, nonatomic) bool onboardingWidget;
@property (nonatomic) ATXHomeScreenPage *page;
@property (nonatomic, copy) NSString *predictionSource;
@property (nonatomic) bool requiresAppLaunch;
@property (nonatomic) double score;
@property (nonatomic) unsigned long long size;
@property (getter=isSuggestedWidget, nonatomic) bool suggestedWidget;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *widgetKind;
@property (nonatomic, copy) NSString *widgetUniqueId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentationIncludingFullIntent:(bool)arg1;
- (id)appBundleId;
- (bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)compactDescription;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleId;
- (void)handleMemoryPressure;
- (unsigned long long)hash;
- (id)init;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMemoryPressureMonitor:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (bool)isOnboardingWidget;
- (bool)isSameWidgetAsWidgetBundleId:(id)arg1 widgetKind:(id)arg2;
- (bool)isSuggestedWidget;
- (id)page;
- (id)predictionSource;
- (id)proto;
- (bool)requiresAppLaunch;
- (double)score;
- (void)setAppBundleId:(id)arg1;
- (void)setExtensionBundleId:(id)arg1;
- (void)setIntent:(id)arg1;
- (void)setOnboardingWidget:(bool)arg1;
- (void)setPage:(id)arg1;
- (void)setPredictionSource:(id)arg1;
- (void)setRequiresAppLaunch:(bool)arg1;
- (void)setScore:(double)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setSuggestedWidget:(bool)arg1;
- (void)setWidgetKind:(id)arg1;
- (void)setWidgetUniqueId:(id)arg1;
- (unsigned long long)size;
- (id)widgetKind;
- (id)widgetUniqueId;

@end
