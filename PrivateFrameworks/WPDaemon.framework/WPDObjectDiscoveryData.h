
@interface WPDObjectDiscoveryData : NSObject {
    NSMutableData * _address;
    long long  _length;
    NSMutableData * _payload;
}

@property (nonatomic, retain) NSMutableData *address;
@property (nonatomic) long long length;
@property (nonatomic, retain) NSMutableData *payload;

+ (id)addressFromNearbyToken:(id)arg1;
+ (id)addressesFromNearbyTokens:(id)arg1;
+ (unsigned char)applyMaskToAddress:(id)arg1;
+ (id)objectDiscoveryReportFromAdvReport:(id)arg1;

- (void).cxx_destruct;
- (id)address;
- (id)description;
- (id)init;
- (long long)length;
- (id)payload;
- (void)setAddress:(id)arg1;
- (void)setLength:(long long)arg1;
- (void)setPayload:(id)arg1;
- (id)updateWithKey:(id)arg1 Status:(unsigned char)arg2 Reserved:(id)arg3;
- (void)wipeout;

@end
