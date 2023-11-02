
@interface TTRIContentUnavailableConfigurationState : TTRIUIContentUnavailableShim <UIConfigurationState>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *searchControllerText;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITraitCollection *traitCollection;

+ (Class)implClass;

- (id)asUIKit;
- (id)customStateForKey:(id)arg1;
- (id)initWithTraitCollection:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)searchControllerText;
- (void)setCustomState:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setSearchControllerText:(id)arg1;
- (id)traitCollection;

@end
