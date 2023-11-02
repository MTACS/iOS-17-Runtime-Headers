
@interface CHIPAccessoriesRecord : NSObject {
    NSString * _accessoryListSignature;
    UARPAccessoryMetadata * _accessoryMetadata;
    NSString * _installationGuideURLString;
    NSObject<OS_os_log> * _log;
    NSString * _stonehengeCertificateID;
}

@property (readonly) NSString *accessoryListSignature;
@property (readonly) UARPAccessoryMetadata *accessoryMetadata;
@property (readonly) NSString *installationGuideURLString;
@property (readonly) NSString *stonehengeCertificateID;

- (void).cxx_destruct;
- (id)accessoryListSignature;
- (id)accessoryMetadata;
- (bool)createAccessoryMetadata:(id)arg1;
- (id)initWithCKRecord:(id)arg1;
- (id)installationGuideURLString;
- (id)stonehengeCertificateID;

@end
