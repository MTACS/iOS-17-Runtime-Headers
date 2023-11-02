
@interface DSAppleSMCDevice : NSObject {
    unsigned int  _dataPort;
    bool  _isConnectionOpen;
}

@property unsigned int dataPort;
@property bool isConnectionOpen;

- (bool)closeAppleSMC;
- (unsigned int)dataPort;
- (id)init;
- (bool)isConnectionOpen;
- (bool)openAppleSMC:(int)arg1;
- (int)readDataFor:(id)arg1 value:(void*)arg2 size:(unsigned long long)arg3;
- (double)readValueFor:(id)arg1;
- (void)setDataPort:(unsigned int)arg1;
- (void)setIsConnectionOpen:(bool)arg1;
- (bool)writeDataFor:(id)arg1 value:(void*)arg2 size:(unsigned long long)arg3;
- (bool)writeValueFor:(id)arg1 andValue:(id)arg2;

@end
