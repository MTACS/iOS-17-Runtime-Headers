
@interface IKJSArrayBufferStore : NSObject {
    IKAppContext * _appContext;
    NSMutableDictionary * _bufferStorage;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (nonatomic, readonly) NSMutableDictionary *bufferStorage;

- (void).cxx_destruct;
- (id)appContext;
- (id)arrayBufferForData:(id)arg1;
- (id)bufferStorage;
- (id)initWithAppContext:(id)arg1;

@end
