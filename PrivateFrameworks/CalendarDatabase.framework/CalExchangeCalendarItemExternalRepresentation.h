
@interface CalExchangeCalendarItemExternalRepresentation : NSObject <CalExchangeSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)dictionaryWithExternalRepresentationData:(id)arg1;
+ (id)externalRepresentationDataWithDictionary:(id)arg1;
+ (id)logHandle;

@end
