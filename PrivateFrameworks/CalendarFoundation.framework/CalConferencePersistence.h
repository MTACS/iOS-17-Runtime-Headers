
@interface CalConferencePersistence : NSObject

+ (id)_htmlSerializedConference:(id)arg1 serializationBlockTitle:(id)arg2;
+ (id)_knownPersistenceFormats;
+ (id)deserializeConference:(id)arg1;
+ (id)serializeConference:(id)arg1 serializationBlockTitle:(id)arg2;
+ (id)updateHTML:(id)arg1 withEventNotes:(id)arg2;

@end
