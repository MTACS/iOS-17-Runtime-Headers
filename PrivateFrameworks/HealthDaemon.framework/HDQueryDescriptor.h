
@interface HDQueryDescriptor : NSObject <NSCopying> {
    id /* block */  _authorizationFilter;
    HDSQLitePredicate * _deletedObjectsPredicate;
    NSDictionary * _encodingOptions;
    _HKFilter * _filter;
    NSSet * _restrictedSourceEntities;
    HDSQLitePredicate * _samplePredicate;
    NSSet * _sampleTypes;
}

@property (nonatomic, readonly, copy) id /* block */ authorizationFilter;
@property (nonatomic, readonly, copy) HDSQLitePredicate *deletedObjectsPredicate;
@property (nonatomic, readonly, copy) NSDictionary *encodingOptions;
@property (nonatomic, readonly, copy) _HKFilter *filter;
@property (nonatomic, readonly, copy) NSSet *restrictedSourceEntities;
@property (nonatomic, readonly, copy) HDSQLitePredicate *samplePredicate;
@property (nonatomic, readonly, copy) NSSet *sampleTypes;

+ (id)queryDescriptorWithSampleType:(id)arg1;
+ (id)queryDescriptorWithSampleTypes:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)authorizationFilter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletedObjectsPredicate;
- (id)encodingOptions;
- (id)filter;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSampleTypes:(id)arg1 encodingOptions:(id)arg2 restrictedSourceEntities:(id)arg3 authorizationFilter:(id /* block */)arg4 filter:(id)arg5 samplePredicate:(id)arg6 deletedObjectsPredicate:(id)arg7;
- (id)initWithSampleTypes:(id)arg1 encodingOptions:(id)arg2 restrictedSourceEntities:(id)arg3 authorizationFilter:(id /* block */)arg4 samplePredicate:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)restrictedSourceEntities;
- (id)samplePredicate;
- (id)sampleTypes;

@end
