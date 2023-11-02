
@interface _PXSelectionCoordinatorState : NSObject {
    PXSelectionSnapshot * _selectionSnapshot;
}

@property (nonatomic, retain) PXSelectionSnapshot *selectionSnapshot;

- (void).cxx_destruct;
- (id)initWithSelectionSnapshot:(id)arg1;
- (id)selectionSnapshot;
- (void)setSelectionSnapshot:(id)arg1;

@end
