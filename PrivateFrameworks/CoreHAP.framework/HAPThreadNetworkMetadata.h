
@interface HAPThreadNetworkMetadata : HMFObject {
    NSData * _PANID;
    NSData * _PSKc;
    NSData * _activeOperationalDataSet;
    unsigned char  _channel;
    NSData * _extendedPANID;
    NSData * _masterKey;
    NSString * _name;
    NSString * _passPhrase;
}

@property (nonatomic, readonly) NSData *PANID;
@property (nonatomic, readonly) NSData *PSKc;
@property (nonatomic, readonly) NSData *activeOperationalDataSet;
@property (nonatomic, readonly) unsigned char channel;
@property (nonatomic, readonly) NSData *extendedPANID;
@property (nonatomic, readonly) NSData *masterKey;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *passPhrase;

+ (id)shortDescription;

- (void).cxx_destruct;
- (id)PANID;
- (id)PSKc;
- (id)activeOperationalDataSet;
- (id)attributeDescriptions;
- (unsigned char)channel;
- (id)description;
- (id)extendedPANID;
- (id)initWithName:(id)arg1 channel:(unsigned char)arg2 PANID:(id)arg3 extendedPANID:(id)arg4 masterKey:(id)arg5 passPhrase:(id)arg6 PSKc:(id)arg7 activeOperationalDataSet:(id)arg8;
- (id)masterKey;
- (id)name;
- (id)passPhrase;
- (id)privateDescription;
- (id)shortDescription;

@end
