
@interface TRIFactor : TRIPBMessage

@property (nonatomic, copy) NSString *alias;
@property (nonatomic) bool hasAlias;
@property (nonatomic) bool hasId_p;
@property (nonatomic) bool hasName;
@property (nonatomic) bool hasNamespaceId;
@property (nonatomic) bool hasNamespaceName;
@property (nonatomic) bool hasType;
@property (nonatomic, copy) NSString *id_p;
@property (nonatomic, retain) NSMutableArray *metadataKeysArray;
@property (nonatomic, readonly) unsigned long long metadataKeysArray_Count;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int namespaceId;
@property (nonatomic, copy) NSString *namespaceName;
@property (nonatomic) int type;

+ (id)descriptor;

- (bool)hasNamespace;
- (bool)isInNamespaceName:(id)arg1;
- (id)namespaceString;
- (id)typeString;

@end
