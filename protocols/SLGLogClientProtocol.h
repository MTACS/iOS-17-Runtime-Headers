
@protocol SLGLogClientProtocol <NSObject>

@required

- (<SLGLogClientProtocolDelegate> *)delegate;
- (void)queryServer:(void *)arg1 errorHandler:(void *)arg2; // needs 2 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SLGLogService> *, void*, id /* block */, void*, void, id /* block */, bool, NSError *, void*
- (void)setDelegate:(id <SLGLogClientProtocolDelegate>)arg1;

@end
