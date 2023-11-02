
@interface _LSOpenConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowURLOverrides;
    UISClickAttribution * _clickAttribution;
    NSDictionary * _frontBoardOptions;
    bool  _ignoreAppLinkEnabledProperty;
    UISPasteSharingToken * _pasteSharingToken;
    NSURL * _referrerURL;
    bool  _sensitive;
    BSServiceConnectionEndpoint * _targetConnectionEndpoint;
}

@property (nonatomic) bool allowURLOverrides;
@property (nonatomic, retain) UISClickAttribution *clickAttribution;
@property (nonatomic, copy) NSDictionary *frontBoardOptions;
@property (nonatomic) bool ignoreAppLinkEnabledProperty;
@property (nonatomic) bool ignoreOpenStrategy;
@property (nonatomic, retain) UISPasteSharingToken *pasteSharingToken;
@property (nonatomic, copy) NSURL *referrerURL;
@property (getter=isSensitive, nonatomic) bool sensitive;
@property (nonatomic, retain) BSServiceConnectionEndpoint *targetConnectionEndpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowURLOverrides;
- (id)clickAttribution;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)frontBoardOptions;
- (bool)ignoreAppLinkEnabledProperty;
- (bool)ignoreOpenStrategy;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isSensitive;
- (id)pasteSharingToken;
- (id)referrerURL;
- (void)setAllowURLOverrides:(bool)arg1;
- (void)setClickAttribution:(id)arg1;
- (void)setFrontBoardOptions:(id)arg1;
- (void)setIgnoreAppLinkEnabledProperty:(bool)arg1;
- (void)setIgnoreOpenStrategy:(bool)arg1;
- (void)setPasteSharingToken:(id)arg1;
- (void)setReferrerURL:(id)arg1;
- (void)setSensitive:(bool)arg1;
- (void)setTargetConnectionEndpoint:(id)arg1;
- (id)targetConnectionEndpoint;

@end
