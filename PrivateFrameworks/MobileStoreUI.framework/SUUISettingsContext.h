
@interface SUUISettingsContext : NSObject {
    SUUIClientContext * _clientContext;
    NSMutableArray * _descriptionReusePool;
    NSMutableDictionary * _elementTypeClass;
    NSMutableArray * _viewReusePool;
}

@property (nonatomic) SUUIClientContext *clientContext;

- (void).cxx_destruct;
- (id)_dequeueReusableSettingDescriptionWithReuseIdentifier:(id)arg1 forViewElement:(id)arg2 parent:(id)arg3;
- (void)_registerClass:(Class)arg1 forReuseIdentifier:(id)arg2;
- (void)_registerReuseClasses;
- (id)clientContext;
- (id)dequeueReusableSettingDescriptionForViewElement:(id)arg1 parent:(id)arg2;
- (id)initWithClientContext:(id)arg1;
- (void)recycleSettingDescriptions:(id)arg1;
- (void)setClientContext:(id)arg1;

@end
