
@interface ICPeerInputStream : NSObject <NSStreamDelegate> {
    NSMutableData * _data;
    <ICPeerInputStreamDelegate> * _delegate;
    NSInputStream * _inputStream;
    bool  _isMessage;
    unsigned long long  _length;
    unsigned long long  _maxLength;
}

@property (nonatomic, retain) NSMutableData *data;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICPeerInputStreamDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic) bool isMessage;
@property (nonatomic) unsigned long long length;
@property (nonatomic) unsigned long long maxLength;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)data;
- (void)dealloc;
- (id)delegate;
- (id)initWithInputStream:(id)arg1;
- (id)inputStream;
- (bool)isMessage;
- (unsigned long long)length;
- (unsigned long long)maxLength;
- (void)readDataFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsMessage:(bool)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setMaxLength:(unsigned long long)arg1;
- (void)startReadLength;
- (void)startReadMessage:(unsigned long long)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end
