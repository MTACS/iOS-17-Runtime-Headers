
@interface DDScannerList : NSObject {
    NSMutableArray * _activeScanners;
    NSString * _hash;
    NSString * _language;
    bool  _languageHighConfidence;
    NSMutableArray * _scannerCache;
    bool  _spotlightSuggestionsEnabled;
    int  _type;
    NSMutableArray * _waitQueue;
}

- (void).cxx_destruct;

@end
