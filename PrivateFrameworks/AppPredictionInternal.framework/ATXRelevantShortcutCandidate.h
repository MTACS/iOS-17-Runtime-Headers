
@interface ATXRelevantShortcutCandidate : NSObject <NSCopying> {
    void donationBundleIdentifier;
    void intent;
    void relevantContexts;
    void widgetDescriptor;
}

@property (nonatomic, readonly) NSString *donationBundleIdentifier;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) NSArray *relevantContexts;
@property (nonatomic, readonly) CHSWidgetDescriptor *widgetDescriptor;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)donationBundleIdentifier;
- (id)init;
- (id)initWithWidgetDescriptor:(id)arg1 donationBundleIdentifier:(id)arg2 intent:(id)arg3 relevantContexts:(id)arg4;
- (id)intent;
- (id)relevantContexts;
- (id)widgetDescriptor;

@end
