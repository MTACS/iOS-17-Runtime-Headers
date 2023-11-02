
@interface HUServiceDetailsRoomItem : HUServiceDetailsAbstractItem {
    HFItemBuilder<HFServiceLikeBuilder> * _serviceLikeBuilder;
}

@property (nonatomic, readonly) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithSourceServiceItem:(id)arg1 home:(id)arg2 serviceLikeBuilder:(id)arg3;
- (id)serviceLikeBuilder;

@end
