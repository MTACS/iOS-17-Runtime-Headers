
@interface PhotosControlPhotoLibraryCommand : PhotosControlCommand {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _argumentRangeForRunOnManagedObjects;
    PLPhotosCTL * _ctl;
    NSObject<OS_dispatch_group> * _group;
    NSString * _libraryArg;
    NSURL * _libraryURL;
    NSManagedObjectContext * _moc;
    <_PhotosControlPhotoLibraryPhotoKit> * _photoKitProxy;
}

@property (readonly) NSString *libraryArg;
@property (readonly) NSURL *libraryURL;
@property (retain) <_PhotosControlPhotoLibraryPhotoKit> *photoKitProxy;

+ (struct option { char *x1; int x2; int *x3; int x4; }*)libraryLongopts;
+ (const char *)libraryOptstring;
+ (id)libraryUsage;
+ (id)libraryUsagesummary;
+ (struct option { char *x1; int x2; int *x3; int x4; }*)longopts;
+ (const char *)optstring;
+ (id)usage;
+ (id)usagesummary;

- (void).cxx_destruct;
- (id)_jsonDictionaryFromManagedObject:(id)arg1 allPreviousObjects:(id)arg2 currentDepth:(unsigned long long)arg3 maxDepth:(unsigned long long)arg4;
- (bool)argument:(id)arg1 isValidDouble:(double*)arg2;
- (void)configureWithAlternateURLToLibraryDatabase:(id)arg1;
- (void)enterGroup;
- (id)initWithArgc:(int)arg1 argv:(char **)arg2 ctl:(id)arg3;
- (id)jsonDictionaryFromError:(id)arg1;
- (id)jsonDictionaryFromManagedObject:(id)arg1 maxDepth:(unsigned long long)arg2;
- (void)leaveGroup;
- (id)libraryArg;
- (bool)libraryProcessOption:(int)arg1 arg:(id)arg2;
- (id)libraryURL;
- (id)libraryURLFromArgument:(id)arg1;
- (id)managedObjectContext;
- (id)photoKitProxy;
- (id)photoLibrary;
- (id)photosCtl;
- (id)plPhotoLibrary;
- (id)processBooleanOptionArg:(id)arg1;
- (bool)processOption:(int)arg1 arg:(id)arg2;
- (int)runOnAssetArgumentsAllowAll:(bool)arg1 additionalPredicate:(id)arg2 block:(id /* block */)arg3;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 allowAll:(bool)arg3 additionalPredicate:(id)arg4 sortDescriptors:(id)arg5 block:(id /* block */)arg6;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 allowAll:(bool)arg3 additionalPredicate:(id)arg4 sortDescriptors:(id)arg5 relationshipKeyPathsForPrefetching:(id)arg6 block:(id /* block */)arg7;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 block:(id /* block */)arg3;
- (int)runOnPhotoKitAssetArgumentsAllowAll:(bool)arg1 propertySets:(id)arg2 additionalPredicate:(id)arg3 block:(id /* block */)arg4;
- (int)save;
- (void)setArgumentRangeForRunOnManagedObjects:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setPhotoKitProxy:(id)arg1;
- (int)setValueString:(id)arg1 forKey:(id)arg2 onManagedObject:(id)arg3;
- (int)traverseRelationshipsForRootManagedObject:(id)arg1 keys:(id)arg2 targetObject:(id*)arg3;
- (void)waitForGroup;

@end
