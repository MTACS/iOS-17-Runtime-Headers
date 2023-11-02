
@interface HKCloudSyncObserverStatus : NSObject <NSCopying, NSSecureCoding> {
    bool  _accountProhibitedForCloudSync;
    bool  _accountSupportsSecureContainer;
    NSDate * _dataUploadRequestCompletionDate;
    NSDate * _dataUploadRequestStartDate;
    long long  _dataUploadRequestStatus;
    NSError * _errorRequiringUserAction;
    NSDate * _lastLitePushDate;
    NSDate * _lastPullDate;
    NSDate * _lastPulledUpdateDate;
    NSDate * _lastPushDate;
    NSDate * _restoreCompletionDate;
    bool  _syncEnabled;
}

@property (nonatomic) bool accountProhibitedForCloudSync;
@property (nonatomic) bool accountSupportsSecureContainer;
@property (nonatomic, copy) NSDate *dataUploadRequestCompletionDate;
@property (nonatomic, copy) NSDate *dataUploadRequestStartDate;
@property (nonatomic) long long dataUploadRequestStatus;
@property (nonatomic, copy) NSError *errorRequiringUserAction;
@property (nonatomic, copy) NSDate *lastLitePushDate;
@property (nonatomic, copy) NSDate *lastPullDate;
@property (nonatomic, copy) NSDate *lastPulledUpdateDate;
@property (nonatomic, copy) NSDate *lastPushDate;
@property (nonatomic, copy) NSDate *restoreCompletionDate;
@property (nonatomic) bool syncEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)accountProhibitedForCloudSync;
- (bool)accountSupportsSecureContainer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataUploadRequestCompletionDate;
- (id)dataUploadRequestStartDate;
- (long long)dataUploadRequestStatus;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)errorRequiringUserAction;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSyncEnabled:(bool)arg1 accountSupportsSecureContainer:(bool)arg2 accountProhibitedForCloudSync:(bool)arg3 lastPullDate:(id)arg4 lastPushDate:(id)arg5 lastLitePushDate:(id)arg6 lastPulledUpdateDate:(id)arg7 restoreCompletionDate:(id)arg8 errorRequiringUserAction:(id)arg9 dataUploadRequestStatus:(long long)arg10 dataUploadRequestStartDate:(id)arg11 dataUploadRequestCompletionDate:(id)arg12;
- (bool)isEqual:(id)arg1;
- (id)lastLitePushDate;
- (id)lastPullDate;
- (id)lastPulledUpdateDate;
- (id)lastPushDate;
- (id)restoreCompletionDate;
- (void)setAccountProhibitedForCloudSync:(bool)arg1;
- (void)setAccountSupportsSecureContainer:(bool)arg1;
- (void)setDataUploadRequestCompletionDate:(id)arg1;
- (void)setDataUploadRequestStartDate:(id)arg1;
- (void)setDataUploadRequestStatus:(long long)arg1;
- (void)setErrorRequiringUserAction:(id)arg1;
- (void)setLastLitePushDate:(id)arg1;
- (void)setLastPullDate:(id)arg1;
- (void)setLastPulledUpdateDate:(id)arg1;
- (void)setLastPushDate:(id)arg1;
- (void)setRestoreCompletionDate:(id)arg1;
- (void)setSyncEnabled:(bool)arg1;
- (bool)syncEnabled;

@end
