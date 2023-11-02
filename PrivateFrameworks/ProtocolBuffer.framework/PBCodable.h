
@interface PBCodable : NSObject <BMStoreData, HDSyncCodable, NSSecureCoding, PQLValuable, VCPBCodable, WFPBCodable>

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer

+ (id)options;
+ (bool)supportsSecureCoding;

- (id)data;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedText;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

- (id)AD_jsonString;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (id)si_dictionaryRepresentation;

// Image: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (unsigned int)dataVersion;
- (id)serialize;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (bool)_isRedactable:(id)arg1;
- (id)_redact:(id)arg1;
- (id)redact;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (bool)_hasIvar:(struct objc_ivar { }*)arg1;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void)setClientMetricsIfSupported:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (long long)encodedByteCount;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (id)mr_valueForPotentiallyUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)hexStringFromData:(id)arg1;
- (id)logMessage;
- (id)logMessageDictionaryFromProtobufDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (bool)readFrom:(id)arg1 error:(id*)arg2;
- (bool)writeTo:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (bool)readFrom:(id)arg1 error:(id*)arg2;
- (bool)writeTo:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
