
@interface KMItemMapper : NSObject {
    Class  _externalObjectClass;
    NSObject<KMMapper> * _mapper;
}

+ (id)_mapperForObjectClass:(Class)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithObjectClass:(Class)arg1 error:(id*)arg2;
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id*)arg3;
- (long long)targetItemType;

@end
