
@interface PPSRequestDispatcher : NSObject <PPSDataReaderProtocol> {
    NSURL * _filepath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *filepath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_executeRequest:(id)arg1 withError:(id*)arg2;
- (long long)_readerTypeForSubsystem:(id)arg1 category:(id)arg2;
- (id)dataForRequest:(id)arg1 withError:(id*)arg2;
- (id)filepath;
- (id)initWithFilepath:(id)arg1;

@end
