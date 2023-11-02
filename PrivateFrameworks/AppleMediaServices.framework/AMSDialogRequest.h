
@interface AMSDialogRequest : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsNativeWatchCancelPlacement;
    NSDictionary * _appearanceInfo;
    NSArray * _buttonActions;
    AMSDialogAction * _cancelAction;
    NSDictionary * _clickstreamMetricsEvent;
    AMSDialogAction * _defaultAction;
    NSURL * _iconBundleURL;
    NSURL * _iconURL;
    NSString * _identifier;
    NSString * _logKey;
    NSString * _message;
    NSString * _messageAccessibilityLabel;
    AMSMetricsEvent * _metricsEvent;
    NSString * _preferredButtonActionIdentifier;
    bool  _preventsCancelButtonStyle;
    long long  _style;
    NSArray * _textFields;
    NSString * _title;
    NSString * _titleAccessibilityLabel;
    NSDictionary * _userInfo;
}

@property (nonatomic) bool allowsNativeWatchCancelPlacement;
@property (nonatomic, readonly) NSDictionary *appearanceInfo;
@property (nonatomic, copy) NSArray *buttonActions;
@property (nonatomic, retain) AMSDialogAction *cancelAction;
@property (nonatomic, copy) NSDictionary *clickstreamMetricsEvent;
@property (nonatomic, retain) AMSDialogAction *defaultAction;
@property (nonatomic, copy) NSURL *iconBundleURL;
@property (nonatomic, copy) NSURL *iconURL;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *logKey;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *messageAccessibilityLabel;
@property (nonatomic, copy) AMSMetricsEvent *metricsEvent;
@property (nonatomic, copy) NSString *preferredButtonActionIdentifier;
@property (nonatomic) bool preventsCancelButtonStyle;
@property (nonatomic) long long style;
@property (nonatomic, copy) NSArray *textFields;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleAccessibilityLabel;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)requestWithTitle:(id)arg1 message:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addButtonAction:(id)arg1;
- (void)addTextField:(id)arg1;
- (bool)allowsNativeWatchCancelPlacement;
- (id)appearanceInfo;
- (id)buttonActions;
- (id)cancelAction;
- (id)clickstreamMetricsEvent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultAction;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)iconBundleURL;
- (id)iconURL;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 appearanceInfo:(id)arg3;
- (id)locateActionWithIdentifier:(id)arg1;
- (id)logKey;
- (id)message;
- (id)messageAccessibilityLabel;
- (id)metricsEvent;
- (id)preferredButtonActionIdentifier;
- (bool)preventsCancelButtonStyle;
- (void)replaceAction:(id)arg1;
- (void)setAllowsNativeWatchCancelPlacement:(bool)arg1;
- (void)setButtonActions:(id)arg1;
- (void)setCancelAction:(id)arg1;
- (void)setClickstreamMetricsEvent:(id)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setIconBundleURL:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageAccessibilityLabel:(id)arg1;
- (void)setMetricsEvent:(id)arg1;
- (void)setPreferredButtonActionIdentifier:(id)arg1;
- (void)setPreventsCancelButtonStyle:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTextFields:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAccessibilityLabel:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (long long)style;
- (id)textFields;
- (id)title;
- (id)titleAccessibilityLabel;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI

- (id)_resultFromDialogAction:(id)arg1;
- (id)_resultFromDialogTextField:(id)arg1;
- (id)generateWebExport;

@end
