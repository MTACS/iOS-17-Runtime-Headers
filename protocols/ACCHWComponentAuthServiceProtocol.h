
@protocol ACCHWComponentAuthServiceProtocol

@required

- (void)authenticateBatteryWithChallenge:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 11: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSData *, NSData *, bool, int, void*
- (void)authenticateTouchControllerWithChallenge:(void *)arg1 completionHandler:(void *)arg2 updateRegistry:(void *)arg3; // needs 3 arg types, found 12: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSData *, NSData *, bool, int, void*, bool
- (void)authenticateVeridianWithChallenge:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 11: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSData *, NSData *, bool, int, void*
- (void)signVeridianChallenge:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSData *, int, void*
- (void)verifyBatteryMatch:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
