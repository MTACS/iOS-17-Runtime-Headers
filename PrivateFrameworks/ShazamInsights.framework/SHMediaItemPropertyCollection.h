
@interface SHMediaItemPropertyCollection : NSObject {
    NSSet * _collection;
    NSString * _property;
}

@property (nonatomic, readonly) NSSet *collection;
@property (nonatomic, readonly) NSString *property;

+ (id)collectionWithArray:(id)arg1 representingProperty:(id)arg2;

- (void).cxx_destruct;
- (id)collection;
- (id)initWithArray:(id)arg1 representingProperty:(id)arg2;
- (id)property;

@end
