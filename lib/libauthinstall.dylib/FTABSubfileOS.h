
@interface FTABSubfileOS : NSObject {
    NSData * _data;
    unsigned int  _dataLength;
    const char * _dataPointer;
    NSString * _tag;
}

@property (readonly) unsigned int dataLength;
@property (readonly) const char *dataPointer;
@property (readonly) NSString *tag;

- (void).cxx_destruct;
- (unsigned int)dataLength;
- (const char *)dataPointer;
- (id)description;
- (id)generateHashSHA256;
- (id)generateHashSHA384;
- (id)generateHashSHA512;
- (id)initWithTag:(id)arg1 data:(id)arg2;
- (id)initWithTag:(id)arg1 dataPointer:(const void*)arg2 dataLength:(unsigned int)arg3;
- (id)tag;

@end
