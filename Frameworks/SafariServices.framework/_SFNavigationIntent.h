
@interface _SFNavigationIntent : NSObject {
    SLHighlight * _highlight;
    bool  _isChildIntent;
    bool  _neverPromptWhenOpeningMultipleIntents;
    long long  _policy;
    long long  _provenance;
    bool  _shouldDismissSidebarOnLoad;
    bool  _shouldPromptBeforeHandling;
    bool  _shouldRelateToSourceTab;
    _WKActivatedElementInfo * _sourceElementInfo;
    NSUUID * _sourceTabUUID;
    NSUUID * _sourceWindowUUID;
    unsigned long long  _type;
    id  _value;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic, readonly) bool canUseExistingBlankTab;
@property (nonatomic, readonly) <WBSCloudTabItem> *cloudTab;
@property (nonatomic, readonly) UIEventAttribution *eventAttribution;
@property (nonatomic, readonly, copy) NSDictionary *externalOptions;
@property (nonatomic, readonly) bool externalURLSourceApplicationIsSpotlight;
@property (nonatomic, retain) SLHighlight *highlight;
@property (nonatomic) bool isChildIntent;
@property (nonatomic, readonly, copy) NSArray *navigationIntents;
@property (nonatomic) bool neverPromptWhenOpeningMultipleIntents;
@property (nonatomic, readonly) bool opensInNewTab;
@property (nonatomic, readonly) bool opensInNewWindow;
@property (nonatomic) long long policy;
@property (nonatomic, readonly, copy) NSString *privacyPreservingDescription;
@property (nonatomic) long long provenance;
@property (nonatomic, readonly) SFTabStateData *recentlyClosedTabStateData;
@property (nonatomic) bool shouldDismissSidebarOnLoad;
@property (nonatomic, readonly) bool shouldOrderToForeground;
@property (nonatomic, readonly) bool shouldPromptBeforeHandling;
@property (nonatomic) bool shouldRelateToSourceTab;
@property (nonatomic, retain) _WKActivatedElementInfo *sourceElementInfo;
@property (nonatomic, retain) NSUUID *sourceTabUUID;
@property (nonatomic, retain) NSUUID *sourceWindowUUID;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, readonly) unsigned long long type;

+ (long long)defaultTabOrder;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithType:(unsigned long long)arg1 value:(id)arg2 policy:(long long)arg3;
- (id)bookmark;
- (bool)canUseExistingBlankTab;
- (id)cloudTab;
- (id)description;
- (id)eventAttribution;
- (id)externalOptions;
- (bool)externalURLSourceApplicationIsSpotlight;
- (id)highlight;
- (bool)isChildIntent;
- (id)navigationIntents;
- (bool)neverPromptWhenOpeningMultipleIntents;
- (bool)opensInNewTab;
- (bool)opensInNewWindow;
- (long long)policy;
- (id)privacyPreservingDescription;
- (long long)provenance;
- (id)recentlyClosedTabStateData;
- (void)setHighlight:(id)arg1;
- (void)setIsChildIntent:(bool)arg1;
- (void)setNeverPromptWhenOpeningMultipleIntents:(bool)arg1;
- (void)setPolicy:(long long)arg1;
- (void)setProvenance:(long long)arg1;
- (void)setShouldDismissSidebarOnLoad:(bool)arg1;
- (void)setShouldRelateToSourceTab:(bool)arg1;
- (void)setSourceElementInfo:(id)arg1;
- (void)setSourceTabUUID:(id)arg1;
- (void)setSourceWindowUUID:(id)arg1;
- (bool)shouldDismissSidebarOnLoad;
- (bool)shouldOrderToForeground;
- (bool)shouldPromptBeforeHandling;
- (bool)shouldRelateToSourceTab;
- (id)sourceElementInfo;
- (id)sourceTabUUID;
- (id)sourceWindowUUID;
- (id)text;
- (unsigned long long)type;

@end
