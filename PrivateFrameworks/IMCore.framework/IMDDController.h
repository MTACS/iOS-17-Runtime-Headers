
@interface IMDDController : NSObject {
    NSObject<OS_dispatch_queue> * _scannerQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *scannerQueue;

+ (id)allSupportedDDAttributesKeys;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_processLinkInAttributedString:(id)arg1;
- (bool)_scanAttributedStringWithMessage:(id)arg1 attributedString:(id)arg2 plainText:(id)arg3;
- (bool)_scanMessageUsingScanner:(id)arg1 attributedString:(id)arg2;
- (id)init;
- (void)scanMessage:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)scanMessage:(id)arg1 outgoing:(bool)arg2 waitUntilDone:(bool)arg3 completionBlock:(id /* block */)arg4;
- (id)scannerQueue;
- (void)setScannerQueue:(id)arg1;
- (struct __DDScanner { }*)sharedScanner;

@end
