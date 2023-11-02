
@interface HAP2AccessoryServerDiscoveryBonjourBrowseResultTuple : NSObject {
    unsigned long long  _changes;
    NSObject<OS_nw_browse_result> * _currentResult;
    NSObject<OS_nw_browse_result> * _previousResult;
}

@property (nonatomic, readonly) unsigned long long changes;
@property (nonatomic, readonly) NSObject<OS_nw_browse_result> *currentResult;
@property (nonatomic, readonly) NSObject<OS_nw_browse_result> *previousResult;

- (void).cxx_destruct;
- (unsigned long long)changes;
- (id)currentResult;
- (id)initWithPreviousResult:(id)arg1 currentResult:(id)arg2 changes:(unsigned long long)arg3;
- (id)previousResult;

@end
