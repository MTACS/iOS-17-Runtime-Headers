
@interface WFEvent : NSObject

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (Class)codableEventClass;
- (id)coreAnalyticsKey;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (id)propertyNames;
- (id)serializableEvent;
- (void)track;

@end
