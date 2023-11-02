
@interface TSUObjectSnapshot : NSObject {
    NSArray * mCompared;
    unsigned long long  mEntryCount;
    void ** mSnapshot;
}

- (void)calibrate:(id)arg1;
- (void)compare;
- (void)dealloc;
- (id)init;
- (void)p_clear;

@end
