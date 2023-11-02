
@interface PXCMMFileBackedActionManager : PXCMMActionManager

@property (nonatomic) <PXCMMFileBackedActionPerformerDelegate> *performerDelegate;

- (id)init;

@end
