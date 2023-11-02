
@interface AFSiriIncomingCall : NSObject <NSCopying, NSSecureCoding> {
    NSString * _callProviderBundleID;
    NSString * _callProviderIdentifier;
    NSString * _callUUID;
    NSArray * _callerContactIdentifiers;
    TUHandle * _handle;
    bool  _isCallerIDBlocked;
    bool  _isVideo;
}

@property (nonatomic, readonly, copy) NSString *callProviderBundleID;
@property (nonatomic, readonly, copy) NSString *callProviderIdentifier;
@property (nonatomic, readonly, copy) NSString *callUUID;
@property (nonatomic, readonly, copy) NSArray *callerContactIdentifiers;
@property (nonatomic, readonly) TUHandle *handle;
@property (nonatomic, readonly) bool isCallerIDBlocked;
@property (nonatomic, readonly) bool isVideo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callProviderBundleID;
- (id)callProviderIdentifier;
- (id)callUUID;
- (id)callerContactIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (id)init;
- (id)initWithCallUUID:(id)arg1 callProviderIdentifier:(id)arg2 callProviderBundleID:(id)arg3 callerContactIdentifiers:(id)arg4 handle:(id)arg5 isVideo:(bool)arg6 isCallerIDBlocked:(bool)arg7;
- (id)initWithCallUUID:(id)arg1 callProviderIdentifier:(id)arg2 callProviderBundleID:(id)arg3 callers:(id)arg4 handle:(id)arg5 isVideo:(bool)arg6 isCallerIDBlocked:(bool)arg7;
- (id)initWithCoder:(id)arg1;
- (bool)isCallerIDBlocked;
- (bool)isVideo;

@end
