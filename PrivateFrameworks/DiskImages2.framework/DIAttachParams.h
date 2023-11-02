
@interface DIAttachParams : DIBaseParams {
    bool  _autoMount;
    unsigned long long  _commandSize;
    bool  _emulateExternalDisk;
    long long  _fileMode;
    bool  _handleRefCount;
    NSString * _inputMountedFrom;
    DIStatFS * _inputStatFS;
    bool  _onDiskCache;
    bool  _quarantine;
    NSData * _quarantineBuffer;
    unsigned long long  _regEntryID;
    bool  _uniqueDevice;
}

@property bool autoMount;
@property (nonatomic) unsigned long long commandSize;
@property (nonatomic) bool emulateExternalDisk;
@property (nonatomic) long long fileMode;
@property (nonatomic) bool handleRefCount;
@property (nonatomic, copy) NSString *inputMountedFrom;
@property (nonatomic, retain) DIStatFS *inputStatFS;
@property (nonatomic) bool onDiskCache;
@property (nonatomic) bool quarantine;
@property (nonatomic, retain) NSData *quarantineBuffer;
@property (nonatomic) unsigned long long rawBlockSize;
@property (nonatomic) unsigned long long regEntryID;
@property (nonatomic) bool shouldValidateShadows;
@property (nonatomic) bool uniqueDevice;

+ (bool)copyWithURL:(id)arg1 outURLStr:(char *)arg2 maxLen:(unsigned long long)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)autoMount;
- (unsigned long long)commandSize;
- (bool)emulateExternalDisk;
- (void)encodeWithCoder:(id)arg1;
- (long long)fileMode;
- (bool)handleRefCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithExistingParams:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 shadowURLs:(id)arg2 error:(id*)arg3;
- (id)inputMountedFrom;
- (id)inputStatFS;
- (id)newAttachWithError:(id*)arg1;
- (bool)onDiskCache;
- (bool)quarantine;
- (id)quarantineBuffer;
- (bool)reOpenIfWritableWithError:(id*)arg1;
- (unsigned long long)regEntryID;
- (void)setAutoMount:(bool)arg1;
- (void)setCommandSize:(unsigned long long)arg1;
- (void)setEmulateExternalDisk:(bool)arg1;
- (void)setFileMode:(long long)arg1;
- (void)setHandleRefCount:(bool)arg1;
- (void)setInputMountedFrom:(id)arg1;
- (void)setInputStatFS:(id)arg1;
- (void)setOnDiskCache:(bool)arg1;
- (void)setQuarantine:(bool)arg1;
- (void)setQuarantineBuffer:(id)arg1;
- (void)setRegEntryID:(unsigned long long)arg1;
- (void)setShouldValidateShadows:(bool)arg1;
- (void)setUniqueDevice:(bool)arg1;
- (void)setupDefaults;
- (bool)shouldValidateShadows;
- (bool)uniqueDevice;
- (bool)updateStatFSWithError:(id*)arg1;

@end
