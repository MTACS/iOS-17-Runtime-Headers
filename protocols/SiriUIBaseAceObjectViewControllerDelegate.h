
@protocol SiriUIBaseAceObjectViewControllerDelegate <NSObject>

@required

- (void)siriViewController:(void *)arg1 openURL:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <SiriSharedUIViewControlling> *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)siriViewController:(id <SiriSharedUIViewControlling>)arg1 performAceCommands:(NSArray *)arg2;
- (void)siriViewController:(void *)arg1 performAceCommands:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <SiriSharedUIViewControlling> *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
