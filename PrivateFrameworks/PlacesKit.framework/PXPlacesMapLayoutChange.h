
@interface PXPlacesMapLayoutChange : NSObject {
    <PXPlacesMapLayoutItem> * _sourceLayoutItem;
    <PXPlacesMapLayoutItem> * _targetLayoutItem;
    long long  _type;
}

@property (nonatomic, readonly) <PXPlacesMapLayoutItem> *sourceLayoutItem;
@property (nonatomic, readonly) <PXPlacesMapLayoutItem> *targetLayoutItem;
@property (readonly) long long type;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSourceLayoutItem:(id)arg1 targetLayoutItem:(id)arg2 type:(long long)arg3;
- (id)sourceLayoutItem;
- (id)targetLayoutItem;
- (long long)type;

@end
