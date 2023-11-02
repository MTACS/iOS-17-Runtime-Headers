
@interface MPCSharedListeningQueueEventContentPlayedNow : NSObject {
    MPModelGenericObject * _container;
    NSArray * _items;
    MPModelGenericObject * _startItem;
}

@property (nonatomic, readonly) MPModelGenericObject *container;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) MPModelGenericObject *startItem;

- (void).cxx_destruct;
- (id)container;
- (id)description;
- (id)initWithItems:(id)arg1 container:(id)arg2 startItem:(id)arg3;
- (id)items;
- (id)startItem;

@end
