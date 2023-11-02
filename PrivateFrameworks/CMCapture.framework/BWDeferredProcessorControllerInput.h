
@interface BWDeferredProcessorControllerInput : BWStillImageProcessorControllerInput {
    BWDeferredProcessingContainer * _container;
    NSString * _photoIdentifier;
    BWDeferredProcessorController * _processorController;
}

@property (nonatomic, readonly) BWDeferredProcessingContainer *container;
@property (nonatomic, readonly) NSString *photoIdentifier;
@property (nonatomic) BWDeferredProcessorController *processorController;

- (id)container;
- (void)dealloc;
- (id)photoIdentifier;
- (id)processorController;
- (void)setContainer:(id)arg1 photoIdentifier:(id)arg2;
- (void)setProcessorController:(id)arg1;

@end
