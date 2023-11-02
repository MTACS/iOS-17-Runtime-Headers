
@interface ICSPushbackStream : NSObject <ICSInputByteStream> {
    int  _pbCursor;
    char * _pbData;
    bool  _readPastEOS;
    <ICSInputByteStream> * _underStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)eos;
- (id)initWithInputStream:(id)arg1;
- (BOOL)peek;
- (bool)pushBack:(BOOL)arg1;
- (BOOL)read;

@end
