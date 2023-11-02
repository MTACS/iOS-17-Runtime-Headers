
@interface SHDataStreamOutput : NSObject <SHDataStream> {
    <SHDataStream> * _next;
    NSOutputStream * _outputStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SHDataStream> *next;
@property (nonatomic, retain) NSOutputStream *outputStream;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)closeWithError:(id*)arg1;
- (void)dealloc;
- (id)initWithDestination:(id)arg1;
- (id)next;
- (id)outputStream;
- (bool)processData:(id)arg1 error:(id*)arg2;
- (void)setNext:(id)arg1;
- (void)setOutputStream:(id)arg1;

@end
