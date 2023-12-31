
@interface ML3BaseLocation : ML3Entity

+ (id)databaseTable;
+ (bool)insertionChangesLibraryContents;
+ (id)newWithDictionary:(id)arg1 inLibrary:(id)arg2;

- (void)enumerateOrphanedAssetsUsingBlock:(id /* block */)arg1;

@end
