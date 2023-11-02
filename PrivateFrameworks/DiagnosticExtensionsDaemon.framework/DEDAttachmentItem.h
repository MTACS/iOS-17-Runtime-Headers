
@interface DEDAttachmentItem : NSObject <DEDSecureArchiving> {
    NSURL * _attachedPath;
    NSString * _deviceID;
    NSString * _displayName;
    NSNumber * _fileSize;
    NSDate * _modificationDate;
}

@property (retain) NSURL *attachedPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceID;
@property (retain) NSString *displayName;
@property (retain) NSNumber *fileSize;
@property (readonly) unsigned long long hash;
@property (retain) NSDate *modificationDate;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon

+ (id)archivedClasses;
+ (id)itemWithDEItem:(id)arg1;
+ (id)itemWithDictionary:(id)arg1;
+ (id)itemWithURL:(id)arg1;

- (void).cxx_destruct;
- (id)attachedPath;
- (id)description;
- (id)deviceID;
- (id)displayName;
- (id)fileSize;
- (bool)isLocal;
- (id)modificationDate;
- (id)serialize;
- (void)setAttachedPath:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFileSize:(id)arg1;
- (void)setModificationDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FeedbackCore.framework/FeedbackCore

- (bool)pointsToReachableDir;
- (bool)pointsToReachableDir;

@end
