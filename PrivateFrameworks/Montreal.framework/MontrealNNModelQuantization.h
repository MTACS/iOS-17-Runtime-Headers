
@interface MontrealNNModelQuantization : MontrealNNDescription <MontrealNNDescriptionProtocol> {
    NSString * _weightStorage;
    NSNumber * _weightStorageRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSString *weightStorage;
@property (readonly) NSNumber *weightStorageRange;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)weightStorage;
- (id)weightStorageRange;

@end
