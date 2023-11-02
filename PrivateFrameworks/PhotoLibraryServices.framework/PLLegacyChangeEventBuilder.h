
@interface PLLegacyChangeEventBuilder : NSObject

+ (id)createXPCDictionaryFromChangedObjectIDs:(id)arg1 redundantDeletes:(id)arg2 uuidsForCloudDeletion:(id)arg3 updatedAttributesByObjectID:(id)arg4 updatedRelationshipsByObjectID:(id)arg5 updatedOrderKeys:(id)arg6 changeSource:(int)arg7 syncChangeMarker:(bool)arg8;

@end
