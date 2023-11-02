
@interface UIPrinterInfoRequest : NSObject {
    id /* block */  _completionHandler;
    PKPrinter * _printer;
    NSDictionary * _printerInfo;
    int  _requestState;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (retain) NSDictionary *printerInfo;
@property (nonatomic) int requestState;

+ (id)requestInfoForPrinter:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)printerInfo;
- (void)requestPrinterInfo;
- (int)requestState;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setPrinterInfo:(id)arg1;
- (void)setRequestState:(int)arg1;

@end
