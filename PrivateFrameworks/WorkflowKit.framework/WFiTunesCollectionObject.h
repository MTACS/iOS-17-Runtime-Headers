
@interface WFiTunesCollectionObject : WFiTunesStoreObject <MTLJSONSerializing> {
    NSString * _genre;
    NSNumber * _trackCount;
    NSString * _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSString *genre;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *trackCount;
@property (nonatomic, readonly) NSString *type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)genre;
- (id)trackCount;
- (id)type;

@end
