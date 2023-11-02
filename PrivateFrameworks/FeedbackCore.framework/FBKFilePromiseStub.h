
@interface FBKFilePromiseStub : FBKManagedFeedbackObject <FBKDownloadableFilePromise>

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, readonly) NSDate *createdAt;
@property (nonatomic, retain) FBKFormResponseStub *formResponseStub;
@property (nonatomic, readonly) NSString *localizedDownloadErrorString;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *remoteID;
@property (nonatomic, readonly) long long status;
@property (nonatomic) long long statusEnum;
@property (nonatomic, copy) NSString *uuid;

+ (id)entityName;
+ (id)fetchRequest;

- (id)UUID;
- (bool)canDownload;
- (unsigned long long)downloadState;
- (id)localizedDownloadErrorString;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (long long)status;

@end
