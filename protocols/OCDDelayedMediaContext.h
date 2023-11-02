
@protocol OCDDelayedMediaContext <OCDDelayedNodeContext>

@required

- (OISFUDataRepresentation *)dataRep;
- (bool)saveDelayedMedia:(OCDDelayedMedia *)arg1 toFile:(NSURL *)arg2;

@end
