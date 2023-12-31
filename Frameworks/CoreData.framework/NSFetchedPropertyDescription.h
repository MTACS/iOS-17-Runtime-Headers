
@interface NSFetchedPropertyDescription : NSPropertyDescription {
    NSFetchRequest * _fetchRequest;
    NSString * _lazyFetchRequestEntityName;
    void * _reserved5;
    void * _reserved6;
}

@property (retain) NSFetchRequest *fetchRequest;

+ (bool)supportsSecureCoding;

- (void)_createCachesAndOptimizeState;
- (unsigned long long)_propertyType;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchRequest;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReadOnly;
- (bool)isTransient;
- (void)setFetchRequest:(id)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setTransient:(bool)arg1;

@end
