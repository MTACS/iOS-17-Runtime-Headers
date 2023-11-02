
@interface FSBlockDeviceResource : FSResource {
    unsigned long long  _blockCount;
    unsigned long long  _blockSize;
    NSString * _bsdName;
    NSString * _devicePath;
    int  _fileDescriptor;
    FSWorkQueue * _fsExecQueue;
    NSObject<OS_dispatch_queue> * _ioKitQueue;
    unsigned int  _notification;
    struct IONotificationPort { } * _notifyPort;
    unsigned long long  _partitionBase;
    unsigned long long  _physicalBlockSize;
    unsigned long long  _queueDepth;
    bool  _supportsBarrier;
    bool  _supportsPriority;
    bool  _supportsUnmap;
    bool  _terminated;
    bool  _writable;
}

@property (readonly) unsigned long long blockCount;
@property (readonly) unsigned long long blockSize;
@property (readonly) NSString *bsdName;
@property (readonly) NSString *devicePath;
@property (readonly) int fileDescriptor;
@property (retain) NSObject<OS_dispatch_queue> *ioKitQueue;
@property unsigned int notification;
@property struct IONotificationPort { }*notifyPort;
@property (readonly) unsigned long long partitionBase;
@property (readonly) unsigned long long physicalBlockSize;
@property (setter=terminate:, nonatomic) bool terminated;
@property (readonly) bool writable;

+ (id)newProxyForBSDName:(id)arg1;
+ (id)newProxyForBSDName:(id)arg1 writable:(bool)arg2;
+ (id)newWithBSDName:(id)arg1 devicePath:(id)arg2 fileDescriptor:(int)arg3 writeable:(bool)arg4;
+ (void)openWithBSDName:(id)arg1 writeable:(bool)arg2 auditToken:(id)arg3 reply:(id /* block */)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)blockCount;
- (unsigned long long)blockSize;
- (id)bsdName;
- (Class)classForCoder;
- (void)dealloc;
- (id)devicePath;
- (void)encodeWithCoder:(id)arg1;
- (int)fileDescriptor;
- (id)getResourceID;
- (id)initCommon;
- (id)initWithBSDName:(id)arg1 devicePath:(id)arg2 fileDescriptor:(int)arg3 writeable:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (id)ioKitQueue;
- (bool)isEqual:(id)arg1;
- (int)kind;
- (void)metaReadInto:(void*)arg1 startingAt:(long long)arg2 length:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)metaWriteFrom:(void*)arg1 startingAt:(long long)arg2 length:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (unsigned int)notification;
- (struct IONotificationPort { }*)notifyPort;
- (unsigned long long)partitionBase;
- (unsigned long long)physicalBlockSize;
- (void)readFirstSectorAndLog;
- (void)readInto:(void*)arg1 startingAt:(long long)arg2 length:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)releaseNotification;
- (void)revoke:(bool)arg1;
- (void)setIoKitQueue:(id)arg1;
- (void)setNotification:(unsigned int)arg1;
- (void)setNotifyPort:(struct IONotificationPort { }*)arg1;
- (void)synchronousMetaReadInto:(void*)arg1 startingAt:(long long)arg2 length:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)synchronousMetaWriteFrom:(void*)arg1 startingAt:(long long)arg2 length:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)synchronousReadInto:(void*)arg1 startingAt:(long long)arg2 length:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)synchronousWriteFrom:(void*)arg1 startingAt:(long long)arg2 length:(unsigned long long)arg3 reply:(id /* block */)arg4;
- (void)terminate:(bool)arg1;
- (bool)terminated;
- (bool)writable;
- (void)writeFrom:(void*)arg1 startingAt:(long long)arg2 length:(unsigned long long)arg3 reply:(id /* block */)arg4;

@end
