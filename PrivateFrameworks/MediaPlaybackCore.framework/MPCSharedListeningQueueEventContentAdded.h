
@interface MPCSharedListeningQueueEventContentAdded : NSObject {
    MPModelGenericObject * _container;
    NSArray * _items;
}

@property (nonatomic, readonly) MPModelGenericObject *container;
@property (nonatomic, readonly, copy) NSArray *items;

- (void).cxx_destruct;
- (id)container;
- (id)description;
- (id)initWithItems:(id)arg1 container:(id)arg2;
- (id)items;

@end
