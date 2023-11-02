
@interface SAUUIDToSymbolicate : NSObject {
    NSMutableArray * _binaries;
    unsigned long long  _dataGatheringOptions;
    int  _livePid;
}

- (void).cxx_destruct;
- (id)debugDescription;

@end
