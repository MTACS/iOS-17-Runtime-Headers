
@interface KVItemMapper : NSObject {
    KMItemMapper * _mapper;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithObjectClass:(Class)arg1 error:(id*)arg2;
- (id)mapObject:(id)arg1 additionalFields:(id)arg2 error:(id*)arg3;
- (id)mapObject:(id)arg1 error:(id*)arg2;
- (long long)targetItemType;

@end
