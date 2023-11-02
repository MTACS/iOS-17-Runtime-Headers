
@interface _FPCopyFileStatus : NSObject {
    int  _copyError;
    NSMutableDictionary * _lastBytesCopiedByFile;
    NSProgress * _progress;
}

@property int copyError;
@property (retain) NSMutableDictionary *lastBytesCopiedByFile;
@property (retain) NSProgress *progress;

- (void).cxx_destruct;
- (void)beginCopyingFile:(id)arg1 state:(struct _copyfile_state { }*)arg2;
- (int)copyError;
- (void)finishCopyingFile:(id)arg1 state:(struct _copyfile_state { }*)arg2;
- (id)init;
- (id)lastBytesCopiedByFile;
- (id)progress;
- (void)setCopyError:(int)arg1;
- (void)setLastBytesCopiedByFile:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)updateCopyingFile:(id)arg1 state:(struct _copyfile_state { }*)arg2;

@end
