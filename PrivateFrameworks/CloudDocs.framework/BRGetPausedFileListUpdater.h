
@interface BRGetPausedFileListUpdater : NSObject <BRGetPausedFileListProtocol, NSSecureCoding> {
    id /* block */  _callback;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallback:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updatePausedFileURL:(id)arg1 reply:(id /* block */)arg2;

@end
