
@interface CKDPCSMemoryCacheEntry : NSObject {
    double  _lastAccess;
    CKDPCSData * _pcsData;
}

@property double lastAccess;
@property (nonatomic, retain) CKDPCSData *pcsData;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (id)init;
- (double)lastAccess;
- (id)pcsData;
- (void)setLastAccess:(double)arg1;
- (void)setPcsData:(id)arg1;

@end
