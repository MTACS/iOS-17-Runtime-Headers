
@interface PKPrintdRPC_BrowseClient : PKPrinterTool_Client {
    <PKPrintdRPC_BrowseClient_ClientProtocol> * _delegate;
    NSDictionary * _infoDictionary;
    unsigned long long  _provenance;
}

- (void).cxx_destruct;
- (id)initWithInfo:(id)arg1 provenance:(unsigned long long)arg2 delegate:(id)arg3;
- (void)invalidate;
- (id)ptConn;
- (void)startBrowsing;

@end
