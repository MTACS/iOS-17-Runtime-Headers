
@interface MIMCMContainer : NSObject {
    unsigned long long  _containerClass;
    NSURL * _containerURL;
    NSString * _identifier;
    bool  _isNew;
    bool  _isTransient;
    struct container_object_s { } * _mcmContainer;
    NSString * _personaUniqueString;
}

@property (nonatomic, readonly) unsigned long long containerClass;
@property (nonatomic, readonly) NSURL *containerURL;
@property (nonatomic, readonly) unsigned long long diskUsage;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isNew;
@property (nonatomic, readonly) bool isTransient;
@property (nonatomic, readonly) struct container_object_s { }*mcmContainer;
@property (nonatomic, readonly) NSString *personaUniqueString;

+ (id)_allContainersForIdentifiers:(id)arg1 groupIdentifiers:(id)arg2 contentClass:(unsigned long long)arg3 forPersona:(id)arg4 transient:(bool)arg5 create:(bool)arg6 error:(id*)arg7;
+ (id)_containerForIdentifier:(id)arg1 contentClass:(unsigned long long)arg2 forPersona:(id)arg3 transient:(bool)arg4 create:(bool)arg5 error:(id*)arg6;
+ (id)_enumeratorWithContainerClass:(unsigned long long)arg1 forPersona:(id)arg2 isTransient:(bool)arg3 identifiers:(id)arg4 groupIdentifiers:(id)arg5 create:(bool)arg6 usingBlock:(id /* block */)arg7;
+ (id)containerForIdentifier:(id)arg1 contentClass:(unsigned long long)arg2 forPersona:(id)arg3 create:(bool)arg4 error:(id*)arg5;
+ (id)containersForBundleIdentifier:(id)arg1 contentClass:(unsigned long long)arg2 forPersona:(id)arg3 create:(bool)arg4 error:(id*)arg5;
+ (id)containersForContentClass:(unsigned long long)arg1 forPersona:(id)arg2 error:(id*)arg3;
+ (id)containersForGroupIdentifier:(id)arg1 forPersona:(id)arg2 create:(bool)arg3 error:(id*)arg4;
+ (id)defaultDirectoriesForContainerType:(unsigned long long)arg1 error:(id*)arg2;
+ (bool)deleteContainers:(id)arg1 waitForDeletion:(bool)arg2 error:(id*)arg3;
+ (id)enumerateContainersWithClass:(unsigned long long)arg1 forPersona:(id)arg2 isTransient:(bool)arg3 identifiers:(id)arg4 groupIdentifiers:(id)arg5 usingBlock:(id /* block */)arg6;
+ (id)transientContainerForIdentifier:(id)arg1 contentClass:(unsigned long long)arg2 forPersona:(id)arg3 create:(bool)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (bool)_doInitWithContainer:(struct container_object_s { }*)arg1 error:(id*)arg2;
- (bool)_refreshContainerMetadataWithError:(id*)arg1;
- (unsigned long long)containerClass;
- (id)containerURL;
- (void)dealloc;
- (id)description;
- (unsigned long long)diskUsage;
- (id)identifier;
- (id)infoValueForKey:(id)arg1 error:(id*)arg2;
- (id)initWithContainer:(struct container_object_s { }*)arg1 error:(id*)arg2;
- (id)initWithSerializedContainer:(id)arg1 matchingWithOptions:(unsigned long long)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isNew;
- (bool)isTransient;
- (struct container_object_s { }*)mcmContainer;
- (id)personaUniqueString;
- (bool)purgeContentWithError:(id*)arg1;
- (bool)reclaimDiskSpaceWithError:(id*)arg1;
- (bool)recreateDefaultStructureWithError:(id*)arg1;
- (bool)regenerateDirectoryUUIDWithError:(id*)arg1;
- (bool)replaceExistingContainer:(id)arg1 error:(id*)arg2;
- (id)serializedContainerRepresentation;
- (bool)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;

@end
