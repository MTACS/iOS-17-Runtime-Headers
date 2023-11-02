
@interface MTLBufferRelocation : NSObject <MTLRelocation> {
    <MTLBuffer> * _buffer;
    unsigned long long  _offset;
    NSString * _symbolName;
}

@property (nonatomic, readonly) <MTLBuffer> *buffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long offset;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *symbolName;

- (id)buffer;
- (void)dealloc;
- (id)initWithSymbolName:(id)arg1 buffer:(id)arg2 offset:(unsigned long long)arg3;
- (unsigned long long)offset;
- (id)symbolName;

@end
