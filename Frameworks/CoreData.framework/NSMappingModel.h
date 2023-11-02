
@interface NSMappingModel : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray * _entityMappings;
    NSMutableDictionary * _entityMappingsByName;
    struct __modelMappingFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _reservedModelMapping : 31; 
    }  _modelMappingFlags;
    void * _reserved;
    void * _reserved1;
    void * _reserved2;
}

@property (retain) NSArray *entityMappings;
@property (readonly, copy) NSDictionary *entityMappingsByName;

+ (id)_newMappingModelFromBundles:(id)arg1 forSourceHashes:(id)arg2 destinationHashes:(id)arg3;
+ (id)inferredMappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3;
+ (void)initialize;
+ (id)mappingModelFromBundles:(id)arg1 forSourceModel:(id)arg2 destinationModel:(id)arg3;
+ (int)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(int)arg1;
+ (bool)supportsSecureCoding;

- (id)_initWithEntityMappings:(id)arg1;
- (void)_throwIfNotEditable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityMappings;
- (id)entityMappingsByName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setEntityMappings:(id)arg1;

@end
