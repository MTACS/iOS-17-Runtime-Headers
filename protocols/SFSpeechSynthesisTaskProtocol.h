
@protocol SFSpeechSynthesisTaskProtocol <NSObject>

@required

- (void)cancelTask;
- (id)initWithRequest:(SFSpeechSynthesisRequest *)arg1;
- (void)startTask:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
