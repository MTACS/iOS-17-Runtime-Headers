
@interface BKSExternalDefaults : BKSAbstractDefaults {
    BKSIAPDefaults * _lazy_iapDefaults;
    BKSKeyboardDefaults * _lazy_keyboardDefaults;
    BKSLockdownDefaults * _lazy_lockdownDefaults;
    BKSPersistentConnectionDefaults * _lazy_persistentConnectionDefaults;
    BKSSpringBoardDefaults * _lazy_springBoardDefaults;
}

@property (nonatomic, readonly, retain) BKSIAPDefaults *iapDefaults;
@property (nonatomic, readonly, retain) BKSKeyboardDefaults *keyboardDefaults;
@property (nonatomic, readonly, retain) BKSLockdownDefaults *lockdownDefaults;
@property (nonatomic, readonly, retain) BKSPersistentConnectionDefaults *persistentConnectionDefaults;
@property (nonatomic, readonly, retain) BKSSpringBoardDefaults *springBoardDefaults;

- (void).cxx_destruct;
- (id)iapDefaults;
- (id)keyboardDefaults;
- (id)lockdownDefaults;
- (id)persistentConnectionDefaults;
- (id)springBoardDefaults;

@end
