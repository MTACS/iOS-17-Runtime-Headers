
@interface CNXPCDataMapperProgressiveHandler : NSObject <ProgressiveResultsHandlerProtocol> {
    id /* block */  _completionBlock;
    id /* block */  _progressBlock;
}

- (void).cxx_destruct;
- (void)completedWithError:(id)arg1;
- (id)initWithProgressBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)receiveProgressiveContacts:(id)arg1 matchInfos:(id)arg2;

@end