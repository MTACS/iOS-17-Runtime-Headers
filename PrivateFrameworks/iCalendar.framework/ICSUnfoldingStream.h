
@interface ICSUnfoldingStream : NSObject <ICSInputByteStream> {
    BOOL  _char1;
    BOOL  _char2;
    <ICSInputByteStream> * _underStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_readTwo;
- (void)_shiftRead;
- (bool)eos;
- (id)initWithInputStream:(id)arg1;
- (BOOL)read;

@end
