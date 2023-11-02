
@interface AVLayoutViewRowHead : NSObject {
    AVLayoutItemAttributes * _firstAttributesInLayoutOrder;
    AVLayoutItemAttributes * _firstAttributesInPriorityOrder;
}

@property (nonatomic, readonly) AVLayoutItemAttributes *firstAttributesInLayoutOrder;
@property (nonatomic, readonly) AVLayoutItemAttributes *firstAttributesInPriorityOrder;

- (void).cxx_destruct;
- (id)firstAttributesInLayoutOrder;
- (id)firstAttributesInPriorityOrder;
- (id)initWithFirstAttributesInLayoutOrder:(id)arg1 firstAttributesInPriorityOrder:(id)arg2;

@end
