
@interface NSFileProviderItemVersion : NSObject <NSSecureCoding> {
    NSData * _contentVersion;
    NSString * _lastEditorDeviceName;
    NSData * _metadataVersion;
}

@property (nonatomic, readonly) NSData *contentVersion;
@property (readonly, copy) NSString *lastEditorDeviceName;
@property (nonatomic, readonly) NSData *metadataVersion;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)beforeFirstSyncComponent;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)etagHash;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentVersion:(id)arg1 metadataVersion:(id)arg2;
- (id)initWithContentVersion:(id)arg1 metadataVersion:(id)arg2 lastEditorDeviceName:(id)arg3;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)lastEditorDeviceName;
- (id)metadataVersion;
- (id)versionRewritingBeforeFirstSync;

// Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

- (id)description;

@end
