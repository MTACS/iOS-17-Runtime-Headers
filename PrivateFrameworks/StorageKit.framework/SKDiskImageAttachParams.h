
@interface SKDiskImageAttachParams : NSObject {
    bool  _emulateExternalDisk;
    bool  _is4KBlockSize;
    bool  _isManagedAttach;
    SKMountParams * _mountParams;
    long long  _policy;
    bool  _readOnly;
    bool  _stdinPassPhrase;
}

@property (nonatomic) bool emulateExternalDisk;
@property (nonatomic) bool is4KBlockSize;
@property (nonatomic) bool isManagedAttach;
@property (nonatomic, copy) SKMountParams *mountParams;
@property (nonatomic) long long policy;
@property (nonatomic) bool readOnly;
@property (nonatomic) bool stdinPassPhrase;

- (void).cxx_destruct;
- (id)description;
- (id)diAttachParamsWithExistingParams:(id)arg1 error:(id*)arg2;
- (id)diAttachParamsWithURL:(id)arg1 error:(id*)arg2;
- (bool)emulateExternalDisk;
- (id)init;
- (id)initWithParams:(id)arg1;
- (bool)is4KBlockSize;
- (bool)isManagedAttach;
- (id)mountParams;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)policy;
- (bool)readOnly;
- (void)setEmulateExternalDisk:(bool)arg1;
- (void)setIs4KBlockSize:(bool)arg1;
- (void)setIsManagedAttach:(bool)arg1;
- (void)setMountParams:(id)arg1;
- (void)setPolicy:(long long)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setStdinPassPhrase:(bool)arg1;
- (void)setupDIAttachParams:(id)arg1;
- (bool)stdinPassPhrase;

@end
