
@interface TRIDownloadNotification : NSObject <TRIDownloadNotificationProtocol> {
    NSError * _error;
    unsigned long long  _progress;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long progress;
@property (nonatomic, readonly) unsigned long long progressMaxValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

+ (id)_descriptionForErrorCode:(unsigned long long)arg1;
+ (id)_dispatchQueue;
+ (bool)_errorIsInsufficientDiskSpaceCloudKitError:(id)arg1;
+ (id)_notificationWithState:(unsigned long long)arg1;
+ (bool)_notifyDownloadUpdateForKey:(id)arg1 withState:(unsigned long long)arg2;
+ (void)deregisterNotificationWithToken:(id)arg1;
+ (id)generalErrorFromDownloadNotificationError:(id)arg1;
+ (id)immediateDownloadNotificationKeyForNamespaceNames:(id)arg1;
+ (id)notificationNameForKey:(id)arg1;
+ (bool)notifyDownloadCompletedForKey:(id)arg1;
+ (bool)notifyDownloadFailedForKey:(id)arg1 withCloudKitError:(id)arg2;
+ (bool)notifyDownloadFailedForKey:(id)arg1 withError:(unsigned long long)arg2;
+ (bool)notifyDownloadProgressForKey:(id)arg1 withProgress:(unsigned long long)arg2;
+ (bool)notifyDownloadStalledForKey:(id)arg1 withProgress:(unsigned long long)arg2;
+ (id)registerDownloadNotificationForKey:(id)arg1 queue:(id)arg2 usingBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)error;
- (id)initWithType:(unsigned long long)arg1 progress:(unsigned long long)arg2 error:(id)arg3;
- (unsigned long long)progress;
- (unsigned long long)progressMaxValue;
- (unsigned long long)type;

@end
