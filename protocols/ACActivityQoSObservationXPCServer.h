
@protocol ACActivityQoSObservationXPCServer

@required

- (bool)subscribeToActivityQoSMatchingPredicate:(NSData *)arg1 error:(out id*)arg2;

@end
