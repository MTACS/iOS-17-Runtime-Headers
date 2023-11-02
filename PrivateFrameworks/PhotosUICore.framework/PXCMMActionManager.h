
@interface PXCMMActionManager : NSObject {
    NSMutableDictionary * _performerClassByType;
    <PXCMMActionPerformerDelegate> * _performerDelegate;
}

@property (nonatomic, readonly) NSMutableDictionary *performerClassByType;
@property (nonatomic) <PXCMMActionPerformerDelegate> *performerDelegate;

- (void).cxx_destruct;
- (Class)actionPerformerClassForActionType:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (id)init;
- (id)messageComposeActionPerformer;
- (id)performerClassByType;
- (id)performerDelegate;
- (id)photosPickerActionPerformer;
- (id)publishActionPerformer;
- (id)sendBackActionPerformer;
- (void)setPerformerDelegate:(id)arg1;

@end
