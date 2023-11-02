
@interface MFBlockDataConsumer : NSObject <MFDataConsumer> {
    id /* block */  _appendHandler;
    id /* block */  _doneHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)appendData:(id)arg1;
- (void)done;
- (id)initWithAppendHandler:(id /* block */)arg1 doneHandler:(id /* block */)arg2;

@end
