
@interface WPDPersistence : NSObject {
    NSString * _bootUUID;
    bool  _isRangingEnabled;
    bool  _needsInit;
    bool  _systemFirstUnlocked;
}

@property (nonatomic, retain) NSString *bootUUID;
@property (nonatomic) bool isRangingEnabled;
@property (nonatomic) bool needsInit;
@property (nonatomic) bool systemFirstUnlocked;

- (void).cxx_destruct;
- (id)bootUUID;
- (id)currentBootSessionUUID;
- (void)dealloc;
- (void)deletePropertyValue:(id)arg1;
- (void)firstUnlockedWithEvent:(bool)arg1;
- (id)init;
- (bool)isRangingEnabled;
- (bool)needsInit;
- (bool)readBoolPropertyValue:(id)arg1;
- (id)readStringPropertyValue:(id)arg1;
- (void)setBootUUID:(id)arg1;
- (void)setIsRangingEnabled:(bool)arg1;
- (void)setNeedsInit:(bool)arg1;
- (void)setSystemFirstUnlocked:(bool)arg1;
- (void)synchronisePrefs;
- (bool)systemFirstUnlocked;
- (void)writeBoolProperty:(id)arg1 Value:(bool)arg2;
- (void)writeStringProperty:(id)arg1 Value:(id)arg2;

@end
