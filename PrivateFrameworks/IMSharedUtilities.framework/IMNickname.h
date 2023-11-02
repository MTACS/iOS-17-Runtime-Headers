
@interface IMNickname : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _archivedDate;
    IMNicknameAvatarImage * _avatar;
    NSString * _concatenatedImageHash;
    bool  _didUseAvatarImageForWallpaper;
    NSString * _displayName;
    NSString * _firstName;
    NSString * _handle;
    NSString * _imageHash;
    NSString * _lastName;
    NSString * _nameHash;
    _NSAttributedStringGrammarInflection * _pronouns;
    NSString * _recordID;
    IMWallpaper * _wallpaper;
    NSString * _wallpaperImageHash;
    NSString * _wallpaperLowResImageHash;
}

@property (nonatomic, copy) NSDate *archivedDate;
@property (nonatomic, retain) IMNicknameAvatarImage *avatar;
@property (nonatomic, readonly) NSString *concatenatedImageHash;
@property (nonatomic) bool didUseAvatarImageForWallpaper;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, retain) NSString *handle;
@property (nonatomic, readonly) bool hasObservedTransition;
@property (nonatomic, readonly) NSString *imageHash;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isIgnored;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, readonly) NSString *nameHash;
@property (nonatomic, retain) _NSAttributedStringGrammarInflection *pronouns;
@property (nonatomic, retain) NSString *recordID;
@property (nonatomic, retain) IMWallpaper *wallpaper;
@property (nonatomic, readonly) NSString *wallpaperImageHash;
@property (nonatomic, readonly) NSString *wallpaperLowResImageHash;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)nameHashWithFirstName:(id)arg1 lastName:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)uniqueFilePathForWritingImageData;
+ (id)uniqueFilePathForWritingWallpaperData;

- (void).cxx_destruct;
- (id)_imageHashCreatedInChunks:(id)arg1;
- (id)_sharingState;
- (id)archivedDate;
- (id)avatar;
- (id)concatenatedImageHash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didUseAvatarImageForWallpaper;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)handle;
- (id)imageHash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 avatar:(id)arg3 pronouns:(id)arg4;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 avatar:(id)arg3 pronouns:(id)arg4 wallpaper:(id)arg5;
- (id)initWithMeContact:(id)arg1;
- (id)initWithPublicDictionaryRepresentationWithoutAvatar:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUpdateFromNickname:(id)arg1 withOptions:(unsigned long long)arg2;
- (id)lastName;
- (id)nameHash;
- (id)pronouns;
- (id)publicDictionaryRepresentation;
- (id)publicDictionaryRepresentationWithoutAvatar;
- (id)recordID;
- (void)setArchivedDate:(id)arg1;
- (void)setAvatar:(id)arg1;
- (void)setDidUseAvatarImageForWallpaper:(bool)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setPronouns:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setWallpaper:(id)arg1;
- (void)updateNameFromContact:(id)arg1;
- (id)wallpaper;
- (id)wallpaperImageHash;
- (id)wallpaperLowResImageHash;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (bool)hasObservedTransition;
- (bool)isActive;
- (bool)isEqualToNickname:(id)arg1 options:(unsigned long long)arg2;
- (bool)isIgnored;

// Image: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent

+ (Class)_NSMorphologyCustomPronounClass;
+ (id)_assetTargetURLForRecordName:(id)arg1 fieldName:(id)arg2 error:(id*)arg3;
+ (id)_blastdoorNicknameFromPublicRecord:(id)arg1 wallpaperRecord:(id)arg2 preKey:(id)arg3 wallpaperDataTag:(id)arg4 wallpaperLowResDataTag:(id)arg5 wallpaperMetadataTag:(id)arg6 knownSender:(bool)arg7 error:(id*)arg8;
+ (id)_getImageURLForPosterDataAt:(id)arg1;
+ (bool)_isObjectBlastDoorCustomPronounPair:(id)arg1;
+ (bool)_isObjectBlastDoorMorphology:(id)arg1;
+ (id)_languageStringForEnumCase:(long long)arg1;
+ (bool)_removeFile:(id)arg1 error:(id*)arg2;
+ (id)allKeys;
+ (id)allKeysExceptHighResWallpaper;
+ (id)allKeysExceptWallpaper;
+ (id)dataFromCKRecord:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
+ (id)nicknameFromPublicRecord:(id)arg1 wallpaperRecord:(id)arg2 preKey:(id)arg3 wallpaperDataTag:(id)arg4 wallpaperLowResDataTag:(id)arg5 wallpaperMetadataTag:(id)arg6 knownSender:(bool)arg7 error:(id*)arg8;

- (id)_CKRecordFromDictionary:(id)arg1 recordName:(id)arg2 assetFieldNames:(id)arg3 error:(id*)arg4;
- (bool)_moveFile:(id)arg1 newURL:(id)arg2 error:(id*)arg3;
- (id)_wallpaperRecordFromDictionary:(id)arg1 owningRecord:(id)arg2 recordName:(id)arg3 error:(id*)arg4;
- (id)publicRecordsForNicknameWithPreKey:(id)arg1 wallpaperDataTag:(id*)arg2 lowResWallpaperDataTag:(id*)arg3 wallpaperMetadataTag:(id*)arg4 error:(id*)arg5;
- (bool)updateNicknameWithRecordID:(id)arg1 error:(id*)arg2;

@end
