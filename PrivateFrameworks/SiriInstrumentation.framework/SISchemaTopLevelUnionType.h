
@interface SISchemaTopLevelUnionType : SISchemaInstrumentationMessage <SISchemaProvisional>

@property (nonatomic, readonly) int clockIsolationLevel;
@property (nonatomic, readonly) SIComponentIdentifier *componentIdentifier;
@property (nonatomic, readonly) int componentName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)joinability;

- (int)clockIsolationLevel;
- (id)componentIdentifier;
- (int)componentName;
- (int)getAnyEventType;
- (id)getComponentId;
- (int)getComponentName;
- (id)getRequestLinkInfo;
- (id)getTypeId;
- (id)getVersion;
- (bool)isProvisional;
- (id)qualifiedMessageName;
- (id)wrapAsAnyEvent;

@end
