
@interface SSRVoiceProfile : NSObject <NSSecureCoding> {
    NSString * _appDomain;
    NSDate * _dateAdded;
    NSString * _locale;
    NSString * _profileBasePath;
    NSString * _profileID;
    NSNumber * _profilePitch;
    NSString * _siriProfileId;
    NSString * _userName;
}

@property (nonatomic, readonly) NSString *appDomain;
@property (nonatomic, readonly) NSDate *dateAdded;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) unsigned long long productCategory;
@property (nonatomic, retain) NSString *profileBasePath;
@property (nonatomic, readonly) NSString *profileID;
@property (nonatomic, readonly) bool profileLocallyAvailable;
@property (nonatomic, retain) NSNumber *profilePitch;
@property (nonatomic, readonly) NSString *pruningCookie;
@property (nonatomic, readonly) NSString *siriProfileId;
@property (nonatomic, retain) NSString *userName;
@property (nonatomic, readonly) NSString *voiceProfileBasePath;
@property (nonatomic, readonly) NSString *voiceProfileIdentity;
@property (nonatomic, readonly) NSString *voiceProfileImplicitCacheDirPath;
@property (nonatomic, readonly) unsigned long long voiceProfileVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)_copyExplicitAudio:(id)arg1 withSpIdType:(unsigned long long)arg2;
- (id)_getProfileVersionFilePath;
- (bool)_isSATMarkedWithMarker:(id)arg1;
- (bool)_markSATEnrollmentWithMarker:(id)arg1;
- (void)_updateVoiceProfileVersionFile;
- (id)_voiceProfilePathForSpidType:(unsigned long long)arg1;
- (id)addUtterances:(id)arg1 spIdType:(unsigned long long)arg2;
- (id)appDomain;
- (unsigned long long)copyTDAudioToTDTI;
- (id)dateAdded;
- (bool)deleteModelForSpidType:(unsigned long long)arg1 recognizerType:(unsigned long long)arg2;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)getEnrollmentUtterancesForModelType:(unsigned long long)arg1;
- (id)getExplicitEnrollmentUtterancesForType:(unsigned long long)arg1;
- (id)getExplicitMarkedEnrollmentUtterancesForType:(unsigned long long)arg1;
- (id)getImplicitEnrollmentUtterancesForType:(unsigned long long)arg1;
- (id)getImplicitEnrollmentUtterancesPriorTo:(id)arg1 forType:(unsigned long long)arg2;
- (unsigned long long)getTDAudioCount;
- (id)importVoiceProfileAtPath:(id)arg1;
- (id)initNewVoiceProfileWithLocale:(id)arg1 withAppDomain:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isMarkedSATEnrolled;
- (bool)isMarkedSATMigrated;
- (id)locale;
- (bool)markSATEnrollmentMigrated;
- (bool)markSATEnrollmentSuccess;
- (unsigned long long)productCategory;
- (id)profileBasePath;
- (id)profileID;
- (bool)profileLocallyAvailable;
- (id)profilePitch;
- (id)pruningCookie;
- (void)setProfileBasePath:(id)arg1;
- (void)setProfilePitch:(id)arg1;
- (void)setSharedSiriProfileId:(id)arg1;
- (void)setUserName:(id)arg1;
- (id)siriProfileId;
- (bool)updatePruningCookie:(id)arg1;
- (id)userName;
- (id)voiceProfileAudioDirPathForSpidType:(unsigned long long)arg1;
- (id)voiceProfileBasePath;
- (id)voiceProfileIdentity;
- (id)voiceProfileImplicitCacheDirPath;
- (id)voiceProfileModelDirForSpidType:(unsigned long long)arg1 recognizerType:(unsigned long long)arg2;
- (id)voiceProfileModelFilePathForRecognizerType:(unsigned long long)arg1 spIdType:(unsigned long long)arg2;
- (unsigned long long)voiceProfileVersion;

@end
