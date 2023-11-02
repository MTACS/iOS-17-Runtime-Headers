
@interface SXLineBalancingComponentTextStyleModifier : NSObject <SXDOMModifying> {
    SXLineBalancingSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SXLineBalancingSettings *settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)enableLineBalancingForComponentTextStyleWithIdentifier:(id)arg1 DOM:(id)arg2 context:(id)arg3;
- (id)initWithSettings:(id)arg1;
- (void)modifyDOM:(id)arg1 context:(id)arg2;
- (id)settings;

@end
