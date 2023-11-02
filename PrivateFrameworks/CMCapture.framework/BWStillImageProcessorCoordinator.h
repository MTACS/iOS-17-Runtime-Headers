
@interface BWStillImageProcessorCoordinator : NSObject {
    NSDictionary * _processorControllersByType;
}

- (id)controllerForType:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithProcessorControllers:(id)arg1;
- (id)processorControllerNames;

@end
