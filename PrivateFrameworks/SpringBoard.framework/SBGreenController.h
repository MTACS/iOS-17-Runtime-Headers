
@interface SBGreenController : NSObject {
    unsigned long long  _fileExistenceState;
    NSArray * _relevantGreenKeys;
}

- (void).cxx_destruct;
- (id)_defaultValuesDictionaryAndState:(unsigned long long*)arg1;
- (id)_deviceRegionCode;
- (unsigned long long)_effectivePlaceIsAmbiguous:(bool*)arg1;
- (void)_readFileStateFromDisk;
- (bool)_writeGreenValuesToDisk:(id)arg1 withState:(unsigned long long)arg2;
- (id)init;
- (void)performPreBuddyWork;

@end
