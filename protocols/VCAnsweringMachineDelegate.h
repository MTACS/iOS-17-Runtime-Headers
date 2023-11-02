
@protocol VCAnsweringMachineDelegate <NSObject>

@required

- (void)answeringMachine:(VCAnsweringMachine *)arg1 didFinishAnnouncement:(bool)arg2 error:(NSError *)arg3;
- (void)answeringMachine:(VCAnsweringMachine *)arg1 didStart:(bool)arg2 error:(NSError *)arg3;
- (void)answeringMachine:(VCAnsweringMachine *)arg1 didStop:(bool)arg2 recordingURL:(NSURL *)arg3 error:(NSError *)arg4;

@end
