
@interface MTLLoadedFileContentsWrapper : NSObject {
    NSObject<OS_dispatch_data> * _dispatchData;
    NSData * _sourceContents;
}

@property (nonatomic, readonly) const void*bytes;
@property (nonatomic, readonly) NSObject<OS_dispatch_data> *dispatchData;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) NSData *sourceContents;

- (const void*)bytes;
- (void)dealloc;
- (id)dispatchData;
- (id)initWithData:(id)arg1;
- (unsigned long long)length;
- (id)sourceContents;

@end
