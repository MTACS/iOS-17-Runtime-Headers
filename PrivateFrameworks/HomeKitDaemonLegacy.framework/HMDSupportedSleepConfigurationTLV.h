
@interface HMDSupportedSleepConfigurationTLV : NSObject <HAPTLVProtocol, NSCopying> {
    NSMutableArray * _supportedWoLPacketConfigurations;
    HAPTLVUnsignedNumberValue * _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *supportedWoLPacketConfigurations;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *version;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithVersion:(id)arg1 supportedWoLPacketConfigurations:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setSupportedWoLPacketConfigurations:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)supportedWoLPacketConfigurations;
- (id)version;

@end
