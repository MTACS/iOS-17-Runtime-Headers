
@interface CKMetric : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _bytesDownloaded;
    unsigned long long  _bytesFulfilledByPeers;
    unsigned long long  _bytesFulfilledLocally;
    unsigned long long  _bytesResumed;
    unsigned long long  _bytesUploaded;
    NSDictionary * _chunkCountByChunkProfile;
    unsigned long long  _connections;
    unsigned long long  _connectionsCreated;
    double  _duration;
    double  _executing;
    NSDictionary * _fileCountByChunkProfile;
    unsigned long long  _perRecordKeysRolled;
    double  _queueing;
    unsigned long long  _shareKeysRolled;
    NSDate * _startDate;
    NSDictionary * _totalBytesByChunkProfile;
    bool  _walrusEnabled;
    unsigned long long  _zoneKeysRolled;
    unsigned long long  _zoneishKeysRolled;
}

@property (nonatomic, readonly) unsigned long long bytesDownloaded;
@property (nonatomic, readonly) unsigned long long bytesFulfilledByPeers;
@property (nonatomic, readonly) unsigned long long bytesFulfilledLocally;
@property (nonatomic, readonly) unsigned long long bytesResumed;
@property (nonatomic, readonly) unsigned long long bytesUploaded;
@property (nonatomic, readonly, copy) NSDictionary *chunkCountByChunkProfile;
@property (nonatomic, readonly) unsigned long long connections;
@property (nonatomic, readonly) unsigned long long connectionsCreated;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double executing;
@property (nonatomic, readonly, copy) NSDictionary *fileCountByChunkProfile;
@property (nonatomic, readonly) unsigned long long perRecordKeysRolled;
@property (nonatomic, readonly) double queueing;
@property (nonatomic, readonly) unsigned long long shareKeysRolled;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, readonly, copy) NSDictionary *totalBytesByChunkProfile;
@property (nonatomic, readonly) bool walrusEnabled;
@property (nonatomic, readonly) unsigned long long zoneKeysRolled;
@property (nonatomic, readonly) unsigned long long zoneishKeysRolled;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (unsigned long long)bytesDownloaded;
- (unsigned long long)bytesFulfilledByPeers;
- (unsigned long long)bytesFulfilledLocally;
- (unsigned long long)bytesResumed;
- (unsigned long long)bytesUploaded;
- (id)chunkCountByChunkProfile;
- (unsigned long long)connections;
- (unsigned long long)connectionsCreated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (double)executing;
- (id)fileCountByChunkProfile;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2 queueing:(double)arg3 executing:(double)arg4 bytesUploaded:(unsigned long long)arg5 bytesDownloaded:(unsigned long long)arg6 connections:(unsigned long long)arg7 connectionsCreated:(unsigned long long)arg8 bytesFulfilledByPeers:(unsigned long long)arg9 bytesFulfilledLocally:(unsigned long long)arg10 bytesResumed:(unsigned long long)arg11 totalBytesByChunkProfile:(id)arg12 chunkCountByChunkProfile:(id)arg13 fileCountByChunkProfile:(id)arg14 walrusEnabled:(bool)arg15 zoneishKeysRolled:(unsigned long long)arg16 perRecordKeysRolled:(unsigned long long)arg17 zoneKeysRolled:(unsigned long long)arg18 shareKeysRolled:(unsigned long long)arg19;
- (unsigned long long)perRecordKeysRolled;
- (double)queueing;
- (unsigned long long)shareKeysRolled;
- (id)startDate;
- (id)totalBytesByChunkProfile;
- (bool)walrusEnabled;
- (unsigned long long)zoneKeysRolled;
- (unsigned long long)zoneishKeysRolled;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (id)initWithMMCSOperationMetric:(id)arg1;

@end
