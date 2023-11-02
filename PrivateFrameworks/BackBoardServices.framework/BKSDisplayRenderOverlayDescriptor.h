
@interface BKSDisplayRenderOverlayDescriptor : NSObject <BKSDisplayRenderOverlayDescribing, BSDescriptionProviding, BSDescriptionStreamable, NSSecureCoding> {
    CADisplay * _display;
    NSString * _displayUUID;
    long long  _interfaceOrientation;
    bool  _interstitial;
    bool  _lockBacklight;
    NSString * _name;
    BKSDisplayProgressIndicatorProperties * _progressIndicatorProperties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CADisplay *display;
@property (nonatomic, copy) NSString *displayUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interfaceOrientation;
@property (getter=isInterstitial, setter=_setInterstitial:, nonatomic) bool interstitial;
@property (nonatomic) bool lockBacklight;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, retain) BKSDisplayProgressIndicatorProperties *progressIndicatorProperties;
@property (readonly) Class superclass;

+ (id)_classesRequiredToDecode;
+ (id)descriptorWithName:(id)arg1 display:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_appendDescriptionToFormatterCore:(id)arg1;
- (id)_initWithName:(id)arg1 displayUUID:(id)arg2;
- (void)_setInterstitial:(bool)arg1;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)display;
- (id)displayUUID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 display:(id)arg2;
- (long long)interfaceOrientation;
- (bool)isEqual:(id)arg1;
- (bool)isInterstitial;
- (bool)lockBacklight;
- (id)name;
- (id)progressIndicatorProperties;
- (void)setDisplayUUID:(id)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setLockBacklight:(bool)arg1;
- (void)setProgressIndicatorProperties:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
