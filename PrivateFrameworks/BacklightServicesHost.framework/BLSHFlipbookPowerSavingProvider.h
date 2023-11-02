
@interface BLSHFlipbookPowerSavingProvider : NSObject <BLSHFlipbookPowerSavingProviding> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _lock_count;
    <BLSHFlipbook> * _lock_flipbook;
    unsigned long long  _lock_reasonsCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <BLSHFlipbook> *flipbook;
@property (getter=isFlipbookPowerSavingEnabled, nonatomic, readonly) bool flipbookPowerSavingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)decrementDisablePowerSavingUsageCountForReason:(unsigned long long)arg1;
- (id)description;
- (id)flipbook;
- (void)incrementDisablePowerSavingUsageCountForReason:(unsigned long long)arg1;
- (id)init;
- (bool)isFlipbookPowerSavingEnabled;
- (id)lock_description;
- (void)setFlipbook:(id)arg1;

@end
