
@interface SCROIOSerialElement : SCROIOElement <SCROIOSerialElementProtocol> {
    int  _fileDescriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int fileDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)description;
- (int)fileDescriptor;
- (id)initWithFileDescriptor:(int)arg1;
- (void)setFileDescriptor:(int)arg1;
- (int)transport;

@end
