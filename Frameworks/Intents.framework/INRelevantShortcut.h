
@interface INRelevantShortcut : NSObject <INImageProxyInjecting, INKeyImageProducing, NSCopying, NSSecureCoding, RERelevantShortcutProperties> {
    NSArray * _relevanceProviders;
    INShortcut * _shortcut;
    long long  _shortcutRole;
    INDefaultCardTemplate * _watchTemplate;
    NSString * _widgetKind;
}

@property (readonly) INImage *_keyImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *relevanceProviders;
@property (nonatomic, copy) NSArray *relevanceProviders;
@property (nonatomic, readonly) INShortcut *shortcut;
@property (nonatomic, copy) INShortcut *shortcut;
@property (nonatomic, readonly) long long shortcutRole;
@property (nonatomic) long long shortcutRole;
@property (readonly) Class superclass;
@property (nonatomic, copy) INDefaultCardTemplate *watchTemplate;
@property (nonatomic, readonly) INDefaultCardTemplate *watchTemplate;
@property (nonatomic, copy) NSString *widgetKind;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_keyImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithShortcut:(id)arg1;
- (id)relevanceProviders;
- (void)setRelevanceProviders:(id)arg1;
- (void)setShortcut:(id)arg1;
- (void)setShortcutRole:(long long)arg1;
- (void)setWatchTemplate:(id)arg1;
- (void)setWidgetKind:(id)arg1;
- (id)shortcut;
- (long long)shortcutRole;
- (id)watchTemplate;
- (id)widgetKind;

@end
