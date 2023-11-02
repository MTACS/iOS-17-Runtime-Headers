
@interface DYFSStreamer : NSObject {
    unsigned long long  _bytes;
    NSError * _deferredReceiveError;
    NSString * _destinationName;
    bool  _didInitiate;
    NSDictionary * _directoryAttributes;
    NSMutableDictionary * _fileHandles;
    NSFileManager * _fileManager;
    NSPredicate * _filenameFilter;
    unsigned long long  _files;
    DYTransportMessage * _initTransferAckMessage;
    bool  _invalid;
    bool  _isSender;
    bool  _itemIsDirectory;
    unsigned long long  _messages;
    NSString * _owner;
    unsigned int  _ownerUID;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _streamLocally;
    DYTransport * _transport;
    NSURL * _url;
    NSMutableArray * _urls;
}

@property (nonatomic, readonly) unsigned long long bytes;
@property (nonatomic, copy) NSString *destinationName;
@property (nonatomic, retain) NSPredicate *filenameFilter;
@property (nonatomic, readonly) unsigned long long files;
@property (nonatomic, readonly) unsigned long long messages;
@property (nonatomic, copy) NSString *owner;
@property (nonatomic, readonly, retain) NSString *path;
@property (nonatomic) bool streamLocally;
@property (nonatomic, readonly, retain) NSURL *url;
@property (nonatomic, readonly) NSArray *urls;

+ (void)denyTransfer:(id)arg1 transport:(id)arg2;
+ (id)streamItem:(id)arg1 withTransport:(id)arg2;
+ (id)streamItem:(id)arg1 withTransport:(id)arg2 destinationName:(id)arg3;

- (bool)_createDirectoryWithAttributes:(id)arg1 error:(id*)arg2;
- (bool)_createOrUpdateFileWithData:(id)arg1 attributes:(id)arg2 error:(id*)arg3;
- (bool)_createSymlinkWithAttributes:(id)arg1 error:(id*)arg2;
- (void)_invalidate;
- (id)_resolveRelativePath:(id)arg1 error:(id*)arg2;
- (void)_sendAbortMessageInReplyTo:(id)arg1 becauseOfError:(id)arg2;
- (bool)_sendCreateDirectoryMessage:(id)arg1 error:(id*)arg2;
- (bool)_sendCreateSymlinkMessage:(id)arg1 destination:(id)arg2 error:(id*)arg3;
- (bool)_sendFileAtURL:(id)arg1 relativePath:(id)arg2 error:(id*)arg3;
- (unsigned long long)bytes;
- (void)dealloc;
- (void)denyTransfer:(id)arg1;
- (id)description;
- (id)destinationName;
- (id)filenameFilter;
- (unsigned long long)files;
- (id)initWithURL:(id)arg1 transport:(id)arg2 asSender:(bool)arg3;
- (id)initiateTransfer;
- (unsigned long long)messages;
- (id)owner;
- (id)path;
- (id)receiveTransfer:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setFilenameFilter:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setStreamLocally:(bool)arg1;
- (bool)streamLocally;
- (id)url;
- (id)urls;

@end
