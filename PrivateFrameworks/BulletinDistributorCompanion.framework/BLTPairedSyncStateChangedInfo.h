
@interface BLTPairedSyncStateChangedInfo : NSObject {
    unsigned long long  _newState;
    unsigned long long  _oldState;
}

@property (nonatomic) unsigned long long newState;
@property (nonatomic) unsigned long long oldState;

- (unsigned long long)newState;
- (unsigned long long)oldState;
- (void)setNewState:(unsigned long long)arg1;
- (void)setOldState:(unsigned long long)arg1;

@end
