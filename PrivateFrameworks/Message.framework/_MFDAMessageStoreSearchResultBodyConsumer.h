
@interface _MFDAMessageStoreSearchResultBodyConsumer : NSObject <DAMailboxFetchSearchResultConsumer, DAMailboxStreamingContentConsumer> {
    MFConditionLock * _doneCondition;
    MFError * _error;
    <MFDAStreamingContentConsumer> * _streamConsumer;
}

@property (nonatomic, retain) MFError *error;
@property (nonatomic, retain) <MFDAStreamingContentConsumer> *streamConsumer;

- (void).cxx_destruct;
- (void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (id)error;
- (id)init;
- (void)searchResultFetchedWithResponses:(id)arg1;
- (void)setError:(id)arg1;
- (void)setStreamConsumer:(id)arg1;
- (bool)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2;
- (id)streamConsumer;
- (void)waitUntilDone;
- (bool)waitUntilDoneBeforeDate:(id)arg1;

@end
