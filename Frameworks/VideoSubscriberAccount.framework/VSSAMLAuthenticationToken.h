
@interface VSSAMLAuthenticationToken : NSObject <VSAuthenticationToken> {
    NSData * _serializedData;
    NSDate * _simulatedExpirationDate;
}

@property (nonatomic, copy) NSString *body;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *serializedData;
@property (nonatomic, retain) NSDate *simulatedExpirationDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)body;
- (id)description;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithSerializedData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFromUnsupportedProvider;
- (bool)isOpaque;
- (bool)isValid;
- (id)serializedData;
- (void)setBody:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setSerializedData:(id)arg1;
- (void)setSimulatedExpirationDate:(id)arg1;
- (id)simulatedExpirationDate;

@end
