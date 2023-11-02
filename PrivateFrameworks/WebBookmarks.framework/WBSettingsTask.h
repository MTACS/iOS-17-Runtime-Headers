
@interface WBSettingsTask : NSObject {
    NSDate * _afterDate;
    NSDate * _beforeDate;
    bool  _clearAllProfiles;
    NSString * _profileIdentifier;
    long long  _taskType;
    WBWebsiteDataRecord * _websiteDataRecord;
}

@property (nonatomic, readonly) NSDate *afterDate;
@property (nonatomic, readonly) NSDate *beforeDate;
@property (nonatomic, readonly) bool clearAllProfiles;
@property (nonatomic, readonly) NSString *profileIdentifier;
@property (nonatomic, readonly) long long taskType;
@property (nonatomic, readonly) WBWebsiteDataRecord *websiteDataRecord;

+ (id)taskForDeletingAllWebsiteDataInProfileWithIdentifier:(id)arg1;
+ (id)taskForDeletingHistoryAfterDate:(id)arg1 beforeDate:(id)arg2 forProfileIdentifier:(id)arg3 clearAllProfiles:(bool)arg4;
+ (id)taskForDeletingIndividualWebsiteDataWithRecord:(id)arg1;
+ (id)taskWithType:(long long)arg1;

- (void).cxx_destruct;
- (id)afterDate;
- (id)beforeDate;
- (bool)clearAllProfiles;
- (id)initWithType:(long long)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 profileIdentifier:(id)arg4 clearAllProfiles:(bool)arg5;
- (id)initWithType:(long long)arg1 websiteDataRecord:(id)arg2 profileIdentifier:(id)arg3;
- (id)profileIdentifier;
- (long long)taskType;
- (id)websiteDataRecord;

@end
