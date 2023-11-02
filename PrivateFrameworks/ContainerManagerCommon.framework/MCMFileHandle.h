
@interface MCMFileHandle : NSObject <MCMFileHandle, MCMFileHandle_Private> {
    NSNumber * _createDPClass;
    unsigned short  _createMode;
    unsigned long long  _direction;
    int  _fd;
    int  _flags;
    bool  _invalid;
    bool  _open;
    NSError * _openError;
    bool  _openLazily;
    NSString * _path;
    <MCMFileHandle_Private> * _relativeToFileHandle;
    unsigned long long  _symlinks;
}

@property (nonatomic, readonly) NSNumber *createDPClass;
@property (nonatomic, readonly) unsigned short createMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic) int fd;
@property (nonatomic, readonly) int flags;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invalid;
@property (getter=isOpen, nonatomic) bool open;
@property (nonatomic, retain) NSError *openError;
@property (nonatomic, readonly) bool openLazily;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, retain) <MCMFileHandle_Private> *relativeToFileHandle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long symlinks;

- (void).cxx_destruct;
- (int)_computeFlags;
- (unsigned short)_computeMode;
- (int)_openAbsolute;
- (int)_openRelative;
- (void)close;
- (id)copyValueAsNumberFromXattr:(id)arg1 error:(id*)arg2;
- (id)copyValueAsStringFromXattr:(id)arg1 maxLength:(unsigned long long)arg2 error:(id*)arg3;
- (id)copyValueAsUUIDFromXattr:(id)arg1 error:(id*)arg2;
- (id)createDPClass;
- (unsigned short)createMode;
- (void)dealloc;
- (id)description;
- (unsigned long long)direction;
- (bool)expectOpenWithError:(id*)arg1;
- (int)fd;
- (int)flags;
- (id)initWithPath:(id)arg1 relativeToFileHandle:(id)arg2 direction:(unsigned long long)arg3 symlinks:(unsigned long long)arg4 createMode:(unsigned short)arg5 createDPClass:(id)arg6 openLazily:(bool)arg7;
- (bool)invalid;
- (bool)isOpen;
- (id)openError;
- (bool)openLazily;
- (bool)openWithError:(id*)arg1;
- (id)path;
- (id)relativeToFileHandle;
- (bool)removeXattr:(id)arg1 error:(id*)arg2;
- (void)setFd:(int)arg1;
- (void)setInvalid:(bool)arg1;
- (void)setOpen:(bool)arg1;
- (void)setOpenError:(id)arg1;
- (bool)setPermissions:(unsigned short)arg1 andOwner:(id)arg2 error:(id*)arg3;
- (void)setRelativeToFileHandle:(id)arg1;
- (bool)setXattr:(id)arg1 valueAsNumber:(id)arg2 error:(id*)arg3;
- (bool)setXattr:(id)arg1 valueAsString:(id)arg2 error:(id*)arg3;
- (bool)setXattr:(id)arg1 valueAsUUID:(id)arg2 error:(id*)arg3;
- (unsigned long long)symlinks;
- (bool)withOpenFileDoBlock:(id /* block */)arg1;

@end
