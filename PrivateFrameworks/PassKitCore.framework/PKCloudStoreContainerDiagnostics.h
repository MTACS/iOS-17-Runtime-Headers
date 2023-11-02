
@interface PKCloudStoreContainerDiagnostics : NSObject <NSSecureCoding> {
    bool  _didFinishInitialSync;
    bool  _isAccountManateeCapable;
    bool  _isDeviceManateeCapable;
    bool  _isEnabled;
    bool  _isManateeEnabled;
    bool  _isSetup;
    bool  _isSyncEnabled;
    NSString * _lastSyncDate;
    NSString * _status;
    NSString * _syncToken;
}

@property (nonatomic, readonly) bool didFinishInitialSync;
@property (nonatomic, readonly) bool isAccountManateeCapable;
@property (nonatomic, readonly) bool isDeviceManateeCapable;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) bool isManateeEnabled;
@property (nonatomic, readonly) bool isSetup;
@property (nonatomic, readonly) bool isSyncEnabled;
@property (nonatomic, readonly) NSString *lastSyncDate;
@property (nonatomic, readonly) NSString *status;
@property (nonatomic, readonly) NSString *syncToken;

+ (bool)supportsSecureCoding;
+ (id)turnedOff;

- (void).cxx_destruct;
- (bool)didFinishInitialSync;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsEnabled:(bool)arg1 isSetup:(bool)arg2 status:(id)arg3 isSyncEnabled:(bool)arg4 syncToken:(id)arg5 lastSyncDate:(id)arg6 didFinishInitialSync:(bool)arg7 isAccountManateeCapable:(bool)arg8 isDeviceManateeCapable:(bool)arg9 isManateeEnabled:(bool)arg10;
- (bool)isAccountManateeCapable;
- (bool)isDeviceManateeCapable;
- (bool)isEnabled;
- (bool)isManateeEnabled;
- (bool)isSetup;
- (bool)isSyncEnabled;
- (id)lastSyncDate;
- (id)status;
- (id)syncToken;

@end
