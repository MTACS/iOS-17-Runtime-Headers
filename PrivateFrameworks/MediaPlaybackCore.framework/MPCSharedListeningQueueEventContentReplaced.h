
@interface MPCSharedListeningQueueEventContentReplaced : NSObject {
    MPModelGenericObject * _startItem;
}

@property (nonatomic, readonly, copy) MPModelGenericObject *startItem;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStartItem:(id)arg1;
- (id)startItem;

@end
