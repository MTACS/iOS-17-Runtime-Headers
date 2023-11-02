
@interface PLResourceIdentityXPC : NSObject <PLResourceIdentity> {
    unsigned int  _recipeID;
    unsigned int  _resourceType;
    PLUniformTypeIdentifier * _uniformTypeIdentifier;
    unsigned int  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOriginalResource;
@property (nonatomic, readonly) unsigned int recipeID;
@property (nonatomic, readonly) unsigned int resourceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (nonatomic, readonly) unsigned int version;

+ (id)dictionaryRepresentationFromResourceIdentity:(id)arg1;
+ (id)imageRequestResourceForDataStoreKey:(id)arg1 store:(id)arg2 assetObjectID:(id)arg3 context:(id)arg4;
+ (id)possibleClassesInDictionaryRepresentation;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithResource:(id)arg1;
- (id)initWithResourceType:(unsigned int)arg1 version:(unsigned int)arg2 recipeID:(unsigned int)arg3 uti:(id)arg4 conformsToTypes:(long long)arg5;
- (bool)isOriginalResource;
- (unsigned int)recipeID;
- (unsigned int)resourceType;
- (id)uniformTypeIdentifier;
- (unsigned int)version;

@end
