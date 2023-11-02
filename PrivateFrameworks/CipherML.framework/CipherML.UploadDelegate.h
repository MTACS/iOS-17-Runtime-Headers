
@interface CipherML.UploadDelegate : SwiftNativeNSObject <CipherML.CipherMLServiceDelegate> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  continuation;
}

- (id)init;
- (void)uploadDoneWithError:(id)arg1;

@end
