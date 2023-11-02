
@interface BUZipFileDescriptorWrapper : NSObject {
    NSObject<OS_dispatch_group> * _accessGroup;
    int  _fileDescriptor;
    <BUReadChannel> * _readChannel;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *accessGroup;
@property (nonatomic, readonly) int fileDescriptor;
@property (nonatomic, readonly) <BUReadChannel> *readChannel;

- (void).cxx_destruct;
- (id)accessGroup;
- (void)beginAccess;
- (void)dealloc;
- (void)endAccess;
- (int)fileDescriptor;
- (id)init;
- (id)initWithFileDescriptor:(int)arg1 queue:(id)arg2;
- (id)readChannel;
- (void)setAccessGroup:(id)arg1;
- (void)waitForAccessToEnd;

@end
