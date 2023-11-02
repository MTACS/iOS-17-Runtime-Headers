
@interface HAPMatterFirmwareUpdateStatus : NSObject <HAPTLVProtocol, NSCopying> {
    HAPOTAProviderStateWrapper * _OTAProviderState;
    HAPTLVUnsignedNumberValue * _accessoryDownloadProgressPercent;
    HAPTLVUnsignedNumberValue * _downloadedFirmwareVersionNumber;
}

@property (nonatomic, retain) HAPOTAProviderStateWrapper *OTAProviderState;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *accessoryDownloadProgressPercent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *downloadedFirmwareVersionNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)OTAProviderState;
- (id)accessoryDownloadProgressPercent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)downloadedFirmwareVersionNumber;
- (id)init;
- (id)initWithOTAProviderState:(id)arg1 downloadedFirmwareVersionNumber:(id)arg2 accessoryDownloadProgressPercent:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setAccessoryDownloadProgressPercent:(id)arg1;
- (void)setDownloadedFirmwareVersionNumber:(id)arg1;
- (void)setOTAProviderState:(id)arg1;

@end
