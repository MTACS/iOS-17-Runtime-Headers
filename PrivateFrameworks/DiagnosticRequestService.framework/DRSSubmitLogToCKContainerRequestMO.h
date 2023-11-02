
@interface DRSSubmitLogToCKContainerRequestMO : DRSSubmitLogRequestMO

@property (nonatomic, copy) NSString *containerName;
@property (nonatomic, copy) NSString *fileAssetField;
@property (nonatomic, retain) NSData *recordDictionaryData;
@property (nonatomic, copy) NSString *recordType;

+ (id)fetchRequest;

@end
