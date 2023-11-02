
@interface ICPeerOutputStream : NSObject <NSStreamDelegate> {
    NSMutableData * _data;
    NSOutputStream * _outputStream;
}

@property (nonatomic, retain) NSMutableData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)data;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;
- (id)outputStream;
- (void)setData:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)writeData;
- (void)writeMessageData:(id)arg1;

@end
