
@interface _UIFocusRegionMovementInfo : _UIFocusMovementInfo {
    unsigned long long  _originatingHeading;
}

@property (nonatomic) unsigned long long originatingHeading;

+ (id)_movementWithHeading:(unsigned long long)arg1 linearHeading:(unsigned long long)arg2 originatingHeading:(unsigned long long)arg3 isInitial:(bool)arg4 inputType:(unsigned long long)arg5;

- (unsigned long long)originatingHeading;
- (void)setOriginatingHeading:(unsigned long long)arg1;

@end
