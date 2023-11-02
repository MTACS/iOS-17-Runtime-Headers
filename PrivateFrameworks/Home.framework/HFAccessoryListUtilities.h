
@interface HFAccessoryListUtilities : NSObject

+ (id)accessoryRepresentableItemForAccessoryRepresentable:(id)arg1 valueSource:(id)arg2;
+ (id)accessoryRepresentableObjectsFromAccessoryLikeObjects:(id)arg1 objectLevel:(unsigned long long)arg2 accessoryTypeGroups:(id)arg3;
+ (id)createAccessoryCategorySectionsWithItems:(id)arg1 inHome:(id)arg2 sectionIdentifierBlock:(id /* block */)arg3;
+ (id)createRoomSectionsWithItems:(id)arg1 inHome:(id)arg2 sectionIdentifierBlock:(id /* block */)arg3;
+ (id)sortedAccessoryTypeGroups;
+ (id)sortedRoomsForHome:(id)arg1;

- (id)init;

@end
