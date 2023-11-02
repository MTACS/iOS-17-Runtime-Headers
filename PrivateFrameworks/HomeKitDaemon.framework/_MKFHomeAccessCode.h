
@interface _MKFHomeAccessCode : _MKFModel <MKFHomeAccessCode, MKFHomeAccessCodePrivateExtensions>

@property (nonatomic, copy) NSString *accessCode;
@property (nonatomic, readonly, copy) MKFHomeAccessCodeDatabaseID *databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, readonly, copy) NSUUID *modelID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDate *writerTimestamp;

+ (id)backingModelProtocol;
+ (id)fetchRequest;

- (id)castIfHomeAccessCode;
- (id)databaseID;
- (id)fetchOtherGuestAccessCodesInHome:(id)arg1;
- (id)fetchOtherUserAccessCodesInHome:(id)arg1;
- (id)homeForHomeAccessCode:(id)arg1;
- (bool)validateAccessCodeForInsertOrUpdate:(id*)arg1;
- (bool)validateForInsertOrUpdate:(id*)arg1;

@end
