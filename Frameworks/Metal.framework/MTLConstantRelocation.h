
@interface MTLConstantRelocation : NSObject <MTLRelocation> {
    NSObject<OS_dispatch_data> * _data;
    NSString * _symbolName;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_data> *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *symbolName;

- (id)data;
- (void)dealloc;
- (id)initWithSymbolName:(id)arg1 bytes:(void*)arg2 length:(unsigned long long)arg3;
- (id)initWithSymbolName:(id)arg1 data:(id)arg2;
- (id)symbolName;

@end
