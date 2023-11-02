
@interface HMThreadNetworkMetadata : NSObject <NSSecureCoding> {
    NSData * _PANID;
    NSData * _PSKc;
    unsigned char  _channel;
    NSData * _extendedPANID;
    NSData * _masterKey;
    NSString * _name;
    NSString * _passPhrase;
}

@property (nonatomic, readonly) NSData *PANID;
@property (nonatomic, readonly) NSData *PSKc;
@property (nonatomic, readonly) unsigned char channel;
@property (nonatomic, readonly) NSData *extendedPANID;
@property (nonatomic, readonly) NSData *masterKey;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *passPhrase;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)PANID;
- (id)PSKc;
- (unsigned char)channel;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedPANID;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 channel:(unsigned char)arg2 PANID:(id)arg3 extendedPANID:(id)arg4 masterKey:(id)arg5 passPhrase:(id)arg6 PSKc:(id)arg7;
- (id)masterKey;
- (id)name;
- (id)passPhrase;

@end
