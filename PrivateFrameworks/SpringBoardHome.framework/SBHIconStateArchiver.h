
@interface SBHIconStateArchiver : NSObject

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

+ (void)_addLeafNodesForNode:(id)arg1 toSet:(id)arg2;
+ (void)_addValuesForCustomIconElement:(id)arg1 toRepresentation:(id)arg2;
+ (id)_folderTypeForFolder:(id)arg1;
+ (bool)_iconContainsMultipleRepresentations:(id)arg1;
+ (id)_metadataForList:(id)arg1 inModel:(id)arg2;
+ (id)_nodeAtPath:(id)arg1 inNode:(id)arg2;
+ (id)_pathForNode:(id)arg1 toIdentifier:(id)arg2;
+ (id)_representationForApplicationIcon:(id)arg1 inModel:(id)arg2;
+ (id)_representationForCustomIcon:(id)arg1 inModel:(id)arg2;
+ (id)_representationForFolder:(id)arg1 inModel:(id)arg2;
+ (id)_representationForIcon:(id)arg1 inModel:(id)arg2;
+ (id)_representationForList:(id)arg1 inModel:(id)arg2;
+ (id)_representationForNode:(id)arg1 inModel:(id)arg2;
+ (id)_representationsForIcon:(id)arg1 inModel:(id)arg2;
+ (bool)_widgetDataSourceIsSuggestion:(id)arg1;
+ (id)archiveRootFolderInModel:(id)arg1 metadata:(id)arg2;
+ (id)folderPathForLeafIdentifier:(id)arg1 inArchive:(id)arg2 iconSource:(id)arg3;
+ (id)iconStateRepresentationForFolder:(id)arg1 inModel:(id)arg2;
+ (id)indexPathForLeafIdentifier:(id)arg1 inArchive:(id)arg2;
+ (id)leafIdentifiersFromArchive:(id)arg1;
+ (id)leafIdentifiersInListAtIndexPath:(id)arg1 inArchive:(id)arg2;
+ (id)modernizeRootArchive:(id)arg1;
+ (id)unarchiveRootFolderFromArchive:(id)arg1 withIconSource:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DashBoard.framework/DashBoard

+ (id)carKitRepresentationFromRootArchive:(id)arg1 iconModel:(id)arg2;
+ (id)rootArchiveFromCarKitRepresentation:(id)arg1 iconModel:(id)arg2;

@end
