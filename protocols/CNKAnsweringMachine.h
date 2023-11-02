
@protocol CNKAnsweringMachine

@required

- (bool)isEnabled;
- (void)openURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)screenCallWithUUID:(void *)arg1 manualScreening:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
