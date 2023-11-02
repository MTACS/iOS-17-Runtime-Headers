
@interface AMSEngagementMessageAction : NSObject {
    NSDictionary * _clickstreamMetricsEvent;
    NSURL * _deepLink;
    NSURL * _iconURL;
    NSString * _identifier;
    NSString * _kind;
    AMSMetricsEvent * _metricsEvent;
    NSDictionary * _parameters;
    bool  _requiresDelegate;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, copy) NSDictionary *clickstreamMetricsEvent;
@property (nonatomic, retain) NSURL *deepLink;
@property (nonatomic, retain) NSURL *iconURL;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *kind;
@property (nonatomic, copy) AMSMetricsEvent *metricsEvent;
@property (nonatomic, copy) NSDictionary *parameters;
@property (nonatomic) bool requiresDelegate;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)clickstreamMetricsEvent;
- (id)deepLink;
- (id)iconURL;
- (id)identifier;
- (id)initWithJSObject:(id)arg1;
- (id)kind;
- (id)makeDialogAction;
- (id)metricsEvent;
- (id)parameters;
- (bool)requiresDelegate;
- (void)setClickstreamMetricsEvent:(id)arg1;
- (void)setDeepLink:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setMetricsEvent:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setRequiresDelegate:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end
