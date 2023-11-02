
@interface CMMessage : NSObject <NSSecureCoding> {
    NSData * _cmAdditionalData;
    NSData * _cmData;
    long long  _cmDataType;
    NSString * _fromPeerDisplayName;
    bool  _isSent;
    unsigned long long  _messageType;
    NSNumber * _movLowestTimestamp;
    NSNumber * _sessionID;
    double  _timestamp;
    NSArray * _toPeerDisplays;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSData *cmAdditionalData;
@property (nonatomic, retain) NSData *cmData;
@property (nonatomic) long long cmDataType;
@property (nonatomic, retain) NSString *fromPeerDisplayName;
@property (nonatomic) bool isSent;
@property (nonatomic) unsigned long long messageType;
@property (nonatomic, retain) NSNumber *movLowestTimestamp;
@property (nonatomic, retain) NSNumber *sessionID;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) NSArray *toPeerDisplays;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cmAdditionalData;
- (id)cmData;
- (long long)cmDataType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fromPeerDisplayName;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageType:(unsigned long long)arg1;
- (bool)isSent;
- (unsigned long long)messageType;
- (id)movLowestTimestamp;
- (id)sessionID;
- (void)setCmAdditionalData:(id)arg1;
- (void)setCmData:(id)arg1;
- (void)setCmDataType:(long long)arg1;
- (void)setFromPeerDisplayName:(id)arg1;
- (void)setIsSent:(bool)arg1;
- (void)setMessageType:(unsigned long long)arg1;
- (void)setMovLowestTimestamp:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setToPeerDisplays:(id)arg1;
- (void)setUuid:(id)arg1;
- (double)timestamp;
- (id)toPeerDisplays;
- (id)uuid;

@end
