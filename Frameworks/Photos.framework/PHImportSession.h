
@interface PHImportSession : PHAssetCollection {
    NSString * _importSessionID;
}

@property (nonatomic, readonly) NSString *importSessionID;

+ (id)entityKeyMap;
+ (id)fetchImportSessionsWithOptions:(id)arg1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)importSessionID;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;

@end
