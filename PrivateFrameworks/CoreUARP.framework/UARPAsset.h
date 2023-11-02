
@interface UARPAsset : NSObject {
    NSData * _data;
    NSFileHandle * _filehandle;
    UARPAssetID * _id;
    NSObject<OS_os_log> * _log;
    long long  _onceToken;
    UARPSandboxExtension * _sandboxExtension;
    NSURL * _url;
}

@property (readonly) NSData *data;
@property (readonly) unsigned long long fileLength;
@property (readonly) UARPAssetID *id;

- (void).cxx_destruct;
- (void)concludeLocalFileAccess;
- (id)data;
- (id)description;
- (unsigned long long)fileLength;
- (id)getDataInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (id)id;
- (id)initWithID:(id)arg1;
- (id)initWithID:(id)arg1 sandboxToken:(id)arg2;
- (id)initWithID:(id)arg1 withBuffer:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)prepareLocalFileForUse:(id*)arg1;
- (bool)setData:(id)arg1 atOffset:(unsigned long long)arg2 error:(id*)arg3;

@end
