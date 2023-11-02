
@interface _PHFetchRequestWrapper : NSObject <NSCopying> {
    NSManagedObjectID * _containerIdentifier;
    NSSet * _fetchPropertySets;
    NSFetchRequest * _fetchRequest;
    unsigned long long  _hash;
}

@property (nonatomic, readonly) NSManagedObjectID *containerIdentifier;
@property (nonatomic, readonly) NSSet *fetchPropertySets;
@property (nonatomic, readonly) NSFetchRequest *fetchRequest;
@property (nonatomic, readonly) unsigned long long hash;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fetchPropertySets;
- (id)fetchRequest;
- (unsigned long long)hash;
- (id)initWithFetchRequest:(id)arg1 containerIdentifier:(id)arg2 fetchPropertySets:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
