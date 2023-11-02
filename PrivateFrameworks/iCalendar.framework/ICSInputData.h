
@interface ICSInputData : NSObject <ICSInputByteStream> {
    unsigned long long  _cursor;
    NSData * _data;
    unsigned long long  _length;
    char * _rawData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)eos;
- (id)initWithData:(id)arg1;
- (BOOL)read;

@end
