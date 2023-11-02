
@protocol PLSidecar <PLPTPTransferableSidecarFile>

@required

- (PLManagedAsset *)asset;
- (NSDate *)captureDate;
- (NSNumber *)compressedSize;
- (unsigned long long)compressedSizeValue;
- (NSURL *)fileURL;
- (NSString *)filename;
- (NSNumber *)index;
- (short)indexValue;
- (NSDate *)modificationDate;
- (NSString *)originalFilename;
- (long long)ptpTrashedState;
- (void)setPtpTrashedState:(long long)arg1;
- (NSString *)uniformTypeIdentifier;

@end
