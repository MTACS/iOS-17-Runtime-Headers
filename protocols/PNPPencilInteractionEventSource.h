
@protocol PNPPencilInteractionEventSource <NSObject>

@required

- (<PNPPencilInteractionEventDestination> *)eventDestination;
- (void)setEventDestination:(id <PNPPencilInteractionEventDestination>)arg1;

@end
