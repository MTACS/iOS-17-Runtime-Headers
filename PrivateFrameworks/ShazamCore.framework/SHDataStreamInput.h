
@interface SHDataStreamInput : NSObject <SHDataStream> {
    <SHDataStream> * _next;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SHDataStream> *next;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)closeWithError:(id*)arg1;
- (bool)loadDataFromURL:(id)arg1 error:(id*)arg2;
- (id)next;
- (bool)processData:(id)arg1 error:(id*)arg2;
- (bool)readFromURL:(id)arg1 error:(id*)arg2;
- (void)setNext:(id)arg1;

@end
