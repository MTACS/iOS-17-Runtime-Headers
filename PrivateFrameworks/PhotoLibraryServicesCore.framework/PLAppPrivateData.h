
@interface PLAppPrivateData : NSObject {
    NSMutableDictionary * _backingDictionary;
    NSURL * _libraryURL;
    PLPhotoLibraryPathManager * _pathManager;
}

@property (retain) NSMutableDictionary *backingDictionary;
@property (retain) NSURL *libraryURL;
@property (retain) PLPhotoLibraryPathManager *pathManager;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServicesCore.framework/PhotoLibraryServicesCore

+ (bool)accessInstanceVariablesDirectly;
+ (id)appPrivateDataForLibraryURL:(id)arg1;

- (void).cxx_destruct;
- (id)_appPrivateDataFolderURL;
- (id)_dictionaryStorageURL;
- (void)_readFromFilesystem;
- (void)_recursiveCreateSubDictionariesIfMissing:(id)arg1 index:(unsigned long long)arg2 parentDictionary:(id)arg3;
- (bool)_saveToFilesystemWithError:(id*)arg1;
- (id)allKeys;
- (id)backingDictionary;
- (id)debugDescription;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (id)initWithLibraryURL:(id)arg1;
- (id)libraryURL;
- (id)pathManager;
- (void)setBackingDictionary:(id)arg1;
- (void)setLibraryURL:(id)arg1;
- (void)setPathManager:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (bool)setValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (bool)setValue:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (bool)setValuesForKeysWithDictionary:(id)arg1 error:(id*)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (bool)getCachedIsReadyForAnalysisFromSavedState;
- (void)saveCachedIsReadyForAnalysis:(bool)arg1;

@end
