
@interface SUSpaceCheckResults : NSObject {
    unsigned long long  _additionalBytesRequired;
    bool  _hasSufficientFreeSpace;
    bool  _needsAppOffload;
    bool  _needsCacheDelete;
}

@property (nonatomic) unsigned long long additionalBytesRequired;
@property (nonatomic) bool hasSufficientFreeSpace;
@property (nonatomic) bool needsAppOffload;
@property (nonatomic) bool needsCacheDelete;

- (unsigned long long)additionalBytesRequired;
- (id)description;
- (bool)hasSufficientFreeSpace;
- (id)init;
- (bool)needsAppOffload;
- (bool)needsCacheDelete;
- (void)setAdditionalBytesRequired:(unsigned long long)arg1;
- (void)setHasSufficientFreeSpace:(bool)arg1;
- (void)setNeedsAppOffload:(bool)arg1;
- (void)setNeedsCacheDelete:(bool)arg1;

@end
