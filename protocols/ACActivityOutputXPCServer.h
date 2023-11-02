
@protocol ACActivityOutputXPCServer

@required

- (NSData *)activityDescriptorContentStatesWithError:(out id*)arg1;
- (NSData *)activityDescriptorForIdentifier:(NSString *)arg1;
- (NSData *)activityDescriptorsWithError:(out id*)arg1;
- (NSData *)subscribeWithOptions:(NSData *)arg1 error:(out id*)arg2;
- (void)unsubscribe;

@end
