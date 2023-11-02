
@interface AMSEngagementMessageRequest : NSObject {
    NSArray * _actions;
    NSDictionary * _appearanceInfo;
    NSDictionary * _clickstreamMetricsEvent;
    AMSEngagementMessageAction * _defaultAction;
    AMSEngagementRequest * _engagementRequest;
    NSURL * _iconURL;
    NSString * _identifier;
    AMSMetricsEvent * _metricsEvent;
    long long  _presentationAction;
    long long  _style;
    NSString * _subtitle;
    NSString * _subtitleAccessibilityLabel;
    NSString * _title;
    NSString * _titleAccessibilityLabel;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, retain) NSDictionary *appearanceInfo;
@property (nonatomic, copy) NSDictionary *clickstreamMetricsEvent;
@property (nonatomic, retain) AMSEngagementMessageAction *defaultAction;
@property (nonatomic, retain) AMSEngagementRequest *engagementRequest;
@property (nonatomic, retain) NSURL *iconURL;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) AMSMetricsEvent *metricsEvent;
@property (nonatomic) long long presentationAction;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *subtitleAccessibilityLabel;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleAccessibilityLabel;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (void).cxx_destruct;
- (id)actions;
- (id)appearanceInfo;
- (id)clickstreamMetricsEvent;
- (id)defaultAction;
- (id)engagementRequest;
- (id)iconURL;
- (id)identifier;
- (id)initWithJSObject:(id)arg1;
- (id)makeDialogRequest;
- (id)metricsEvent;
- (long long)presentationAction;
- (void)setActions:(id)arg1;
- (void)setAppearanceInfo:(id)arg1;
- (void)setClickstreamMetricsEvent:(id)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setEngagementRequest:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMetricsEvent:(id)arg1;
- (void)setPresentationAction:(long long)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleAccessibilityLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAccessibilityLabel:(id)arg1;
- (long long)style;
- (id)subtitle;
- (id)subtitleAccessibilityLabel;
- (id)title;
- (id)titleAccessibilityLabel;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

- (id)_resultFromMessageAction:(id)arg1;
- (id)generateWebExport;

@end
