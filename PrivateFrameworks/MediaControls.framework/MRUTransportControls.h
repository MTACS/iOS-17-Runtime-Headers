
@interface MRUTransportControls : NSObject {
    MRUTransportControlItem * _centerItem;
    MRUTransportControlItem * _leadingItem;
    MRUTransportControlItem * _leftItem;
    MRUTransportControlItem * _rightItem;
}

@property (nonatomic, readonly) MRUTransportControlItem *centerItem;
@property (nonatomic, readonly) MRUTransportControlItem *leadingItem;
@property (nonatomic, readonly) MRUTransportControlItem *leftItem;
@property (nonatomic, readonly) MRUTransportControlItem *rightItem;

- (void).cxx_destruct;
- (id)centerItem;
- (id)centerItemFromResponse:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithMPCResponse:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)leadingItem;
- (id)leadingItemFromResponse:(id)arg1;
- (id)leftItem;
- (id)leftItemFromResponse:(id)arg1;
- (id)rightItem;
- (id)rightItemFromResponse:(id)arg1;

@end
