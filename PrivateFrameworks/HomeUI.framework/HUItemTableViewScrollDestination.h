
@interface HUItemTableViewScrollDestination : NSObject {
    bool  _animated;
    HFItem * _item;
}

@property (getter=isAnimated, nonatomic, readonly) bool animated;
@property (nonatomic, readonly) HFItem *item;

- (void).cxx_destruct;
- (id)initWithItem:(id)arg1 animated:(bool)arg2;
- (bool)isAnimated;
- (id)item;

@end
