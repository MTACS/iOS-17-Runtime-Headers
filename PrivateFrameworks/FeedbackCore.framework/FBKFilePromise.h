
@interface FBKFilePromise : FBKManagedFeedbackObject <FBKDownloadableFilePromise> {
    long long  state;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, retain) NSDate *createdAt;
@property (nonatomic, retain) NSNumber *deviceID;
@property (retain) FBKFeedbackFollowup *feedbackFollowup;
@property (retain) FBKFormResponse *formResponse;
@property (nonatomic, readonly) NSString *localizedDownloadErrorString;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long size;
@property (nonatomic) long long state;
@property (nonatomic, retain) NSNumber *statusEnum;
@property (nonatomic, retain) NSDate *updatedAt;
@property (nonatomic, retain) NSString *uuid;

+ (unsigned long long)downloadStateWithUUID:(id)arg1 state:(long long)arg2 creationDate:(id)arg3 contentItem:(id)arg4;
+ (id)entityName;
+ (id)localizedDownloadErrorStringForState:(unsigned long long)arg1;

- (id)UUID;
- (bool)canDownload;
- (unsigned long long)downloadState;
- (id)localizedDownloadErrorString;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
