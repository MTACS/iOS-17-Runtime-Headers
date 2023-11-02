
@interface _AFBluetoothHeadphoneInEarDetectionStateMutation : NSObject <AFBluetoothHeadphoneInEarDetectionStateMutating> {
    AFBluetoothHeadphoneInEarDetectionState * _base;
    bool  _isEnabled;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasIsEnabled : 1; 
        unsigned int hasPrimaryEarbudSide : 1; 
        unsigned int hasPrimaryInEarStatus : 1; 
        unsigned int hasSecondaryInEarStatus : 1; 
    }  _mutationFlags;
    long long  _primaryEarbudSide;
    long long  _primaryInEarStatus;
    long long  _secondaryInEarStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)getIsEnabled;
- (long long)getPrimaryEarbudSide;
- (long long)getPrimaryInEarStatus;
- (long long)getSecondaryInEarStatus;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setIsEnabled:(bool)arg1;
- (void)setPrimaryEarbudSide:(long long)arg1;
- (void)setPrimaryInEarStatus:(long long)arg1;
- (void)setSecondaryInEarStatus:(long long)arg1;

@end
