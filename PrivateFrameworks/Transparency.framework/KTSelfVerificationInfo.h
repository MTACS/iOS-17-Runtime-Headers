
@interface KTSelfVerificationInfo : NSObject <NSSecureCoding> {
    NSError * _failure;
    NSData * _selfDeviceID;
    NSArray * _syncedLoggableDatas;
    NSDictionary * _uriToServerLoggableDatas;
}

@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property (retain) NSError *failure;
@property (retain) NSData *selfDeviceID;
@property (retain) NSArray *syncedLoggableDatas;
@property (retain) NSDictionary *uriToServerLoggableDatas;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)diagnosticsJsonDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)failure;
- (id)initWithCoder:(id)arg1;
- (id)initWithSyncedLoggableDatas:(id)arg1 uriToServerLoggableDatas:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)selfDeviceID;
- (void)setFailure:(id)arg1;
- (void)setSelfDeviceID:(id)arg1;
- (void)setSyncedLoggableDatas:(id)arg1;
- (void)setUriToServerLoggableDatas:(id)arg1;
- (id)syncedLoggableDatas;
- (void)updateUri:(id)arg1 serverLoggableDatas:(id)arg2;
- (id)uriToServerLoggableDatas;

@end
