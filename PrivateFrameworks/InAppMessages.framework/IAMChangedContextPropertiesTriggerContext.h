
@interface IAMChangedContextPropertiesTriggerContext : NSObject <IAMTriggerContext> {
    NSString * _bundleIdentifier;
    NSSet * _contextPropertyNames;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSSet *contextPropertyNames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)contextPropertyNames;
- (id)initWithContextPropertyNames:(id)arg1 bundleIdentifier:(id)arg2;
- (bool)satisfiesPresentationTrigger:(id)arg1;

@end
