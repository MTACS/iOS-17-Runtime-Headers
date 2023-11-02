
@interface THCredentials : NSObject <NSSecureCoding> {
    NSData * _PSKC;
    NSData * _activeOperationalDataSet;
    NSData * _borderAgentID;
    unsigned char  _channel;
    NSDate * _creationDate;
    NSData * _extendedPANID;
    NSDate * _lastModificationDate;
    NSData * _networkKey;
    NSString * _networkName;
    NSData * _panID;
}

@property (nonatomic, readonly) NSData *PSKC;
@property (nonatomic, readonly) NSData *activeOperationalDataSet;
@property (nonatomic, readonly) NSData *borderAgentID;
@property (nonatomic) unsigned char channel;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSData *extendedPANID;
@property (nonatomic, readonly) NSDate *lastModificationDate;
@property (nonatomic, readonly) NSData *networkKey;
@property (nonatomic, readonly) NSString *networkName;
@property (nonatomic, readonly) NSData *panID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)PSKC;
- (id)activeOperationalDataSet;
- (id)borderAgentID;
- (unsigned char)channel;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedPANID;
- (id)initThreadCredentials:(id)arg1 extendedPANID:(id)arg2 borderAgentID:(id)arg3 activeOperationalDataSet:(id)arg4 PSKC:(id)arg5 networkKey:(id)arg6 channel:(unsigned char)arg7 panID:(id)arg8 creationDate:(id)arg9 lastModificationDate:(id)arg10;
- (id)initWithCoder:(id)arg1;
- (id)lastModificationDate;
- (id)networkKey;
- (id)networkName;
- (id)panID;
- (void)setChannel:(unsigned char)arg1;

@end
