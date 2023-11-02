
@interface TKSmartCardSlotScreen : NSObject {
    long long  _physicalColumnCount;
    long long  _physicalRowCount;
    long long  _virtualColumnCount;
    long long  _virtualRowCount;
}

@property long long physicalColumnCount;
@property long long physicalRowCount;
@property long long virtualColumnCount;
@property long long virtualRowCount;

- (bool)displayMessage:(id)arg1 x:(long long)arg2 y:(long long)arg3 duration:(double)arg4 clearScreen:(bool)arg5;
- (long long)physicalColumnCount;
- (long long)physicalRowCount;
- (void)setPhysicalColumnCount:(long long)arg1;
- (void)setPhysicalRowCount:(long long)arg1;
- (void)setVirtualColumnCount:(long long)arg1;
- (void)setVirtualRowCount:(long long)arg1;
- (long long)virtualColumnCount;
- (long long)virtualRowCount;

@end
