
@interface PKPrinterBrowser : NSObject <PKPrintdRPC_BrowseClient_ClientProtocol> {
    PKPrintdRPC_BrowseClient * _browserClient;
    NSMutableDictionary * _btDevices;
    <PKPrinterBrowserDelegate> * _delegate;
    bool  _delegateRespondsToProximityUpdate;
    unsigned char  _originalCellFlag;
    unsigned char  _originalWifiFlag;
    NSMutableDictionary * _printers;
}

@property (nonatomic, retain) NSMutableDictionary *btDevices;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPrinterBrowserDelegate> *delegate;
@property (readonly) bool delegateRespondsToProximityUpdate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *printers;
@property (readonly) Class superclass;

+ (id)browserWithDelegate:(id)arg1;
+ (id)browserWithDelegate:(id)arg1 infoDictionary:(id)arg2;
+ (id)browserWithDelegate:(id)arg1 infoDictionary:(id)arg2 provenance:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)browserAdded:(id)arg1 removed:(id)arg2;
- (id)btDevices;
- (void)btlePrinterFound:(id)arg1;
- (void)btleRssiUpdated:(id)arg1 rssi:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (bool)delegateRespondsToProximityUpdate;
- (id)initWithDelegate:(id)arg1 infoDictionary:(id)arg2 provenance:(unsigned long long)arg3;
- (void)printerAdded:(id)arg1 more:(bool)arg2;
- (void)printerRemoved:(id)arg1 more:(bool)arg2;
- (id)printers;
- (void)setBtDevices:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrinters:(id)arg1;

@end
