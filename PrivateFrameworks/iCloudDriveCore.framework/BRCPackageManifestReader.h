
@interface BRCPackageManifestReader : NSEnumerator {
    NSError * _error;
    PBMessageStreamReader * _reader;
    NSInputStream * _stream;
}

@property (nonatomic) Class itemClass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)done;
- (id)error;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (id)initWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2;
- (id)initWithInputStream:(id)arg1;
- (id)initWithURL:(id)arg1;
- (Class)itemClass;
- (id)nextObject;
- (void)setItemClass:(Class)arg1;

@end
