
@interface MPCSharedListeningQueueEventContentRemoved : NSObject {
    MPModelGenericObject * _item;
}

@property (nonatomic, readonly, copy) MPModelGenericObject *item;

- (void).cxx_destruct;
- (id)description;
- (id)initWithItem:(id)arg1;
- (id)item;

@end
