
@interface WBTab : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, WBBookmarkRepresentable, WBSCloudTabItem, WBSerializable> {
    NSArray * _URLStringComponents;
    NSString * _URLStringForLastSearch;
    bool  _added;
    WebBookmark * _bookmark;
    bool  _inUnnamedTabGroup;
    bool  _isMutable;
    NSString * _lastSearchTerm;
    bool  _matchedLastSearch;
    bool  _modified;
    bool  _moved;
    bool  _privateBrowsing;
    bool  _shared;
    NSString * _tabGroupUUID;
    NSString * _titleForLastSearch;
    NSArray * _titleWords;
}

@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, copy) NSArray *URLStringComponents;
@property (nonatomic, copy) NSString *URLStringForLastSearch;
@property (getter=wasAdded, nonatomic, readonly) bool added;
@property (nonatomic, retain) WebBookmark *bookmark;
@property (nonatomic, readonly) bool canSetPinned;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *debugSyncDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int identifier;
@property (getter=isInUnnamedTabGroup, nonatomic, readonly) bool inUnnamedTabGroup;
@property (getter=isInserted, nonatomic, readonly) bool inserted;
@property (nonatomic, readonly) bool isBlank;
@property (nonatomic, readonly) bool isMarkedAsRead;
@property (getter=_isMutable, nonatomic, readonly) bool isMutable;
@property (nonatomic, readonly) bool isShowingReader;
@property (nonatomic, copy) NSString *lastSearchTerm;
@property (nonatomic, readonly) WBLocalTabAttributes *localAttributes;
@property (nonatomic) bool matchedLastSearch;
@property (getter=wasModified, nonatomic, readonly) bool modified;
@property (nonatomic, readonly, copy) NSDictionary *modifiedSettingsFieldsByName;
@property (getter=wasMoved, nonatomic, readonly) bool moved;
@property (nonatomic, readonly) bool needsSecureDelete;
@property (nonatomic, readonly) int orderIndex;
@property (nonatomic, readonly) int parentIdentifier;
@property (getter=isPinned, nonatomic, readonly) bool pinned;
@property (nonatomic, readonly, copy) NSString *pinnedTitle;
@property (nonatomic, readonly, copy) NSURL *pinnedURL;
@property (nonatomic, readonly, copy) NSString *privacyPreservingDescription;
@property (getter=isPrivateBrowsing, nonatomic, readonly) bool privateBrowsing;
@property (nonatomic, readonly, copy) NSDictionary *readerScrollPositionDictionary;
@property (getter=isShared, nonatomic, readonly) bool shared;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) WBSCRDTPosition *syncPosition;
@property (getter=isSyncable, nonatomic, readonly) bool syncable;
@property (nonatomic, readonly, copy) NSURL *syncableURL;
@property (nonatomic, readonly, copy) NSString *tabGroupUUID;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, copy) NSString *titleForLastSearch;
@property (nonatomic, copy) NSArray *titleWords;
@property (nonatomic, readonly, copy) NSURL *url;
@property (nonatomic, readonly, copy) NSString *uuid;
@property (nonatomic, readonly, copy) NSString *uuidString;

+ (id)pinnedTabWithTitle:(id)arg1 url:(id)arg2 deviceIdentifier:(id)arg3;
+ (id)startPageTabWithDeviceIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URLString;
- (id)URLStringComponents;
- (id)URLStringForLastSearch;
- (id)_addressFromURL:(id)arg1;
- (bool)_isMutable;
- (void)_setLocalURLString:(id)arg1;
- (void)_updateBookmarkWithURL:(id)arg1 shouldSync:(bool)arg2;
- (id)bookmark;
- (bool)canCloseAutomaticallyForInterval:(double)arg1;
- (bool)canSetPinned;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugSyncDescription;
- (id)description;
- (id)deviceIdentifier;
- (id)dictionaryRepresentation;
- (id)duplicate;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSameUUIDAndURLAsTab:(id)arg1;
- (unsigned long long)hash;
- (int)identifier;
- (id)initWithBookmark:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithTitle:(id)arg1 url:(id)arg2 deviceIdentifier:(id)arg3;
- (id)initWithUUID:(id)arg1 deviceIdentifier:(id)arg2;
- (id)initWithUUID:(id)arg1 deviceIdentifier:(id)arg2 lastVisitTime:(id)arg3;
- (id)initWithUUID:(id)arg1 title:(id)arg2 url:(id)arg3 deviceIdentifier:(id)arg4;
- (id)initWithUUID:(id)arg1 title:(id)arg2 url:(id)arg3 deviceIdentifier:(id)arg4 lastVisitTime:(id)arg5;
- (id)initWithUUID:(id)arg1 title:(id)arg2 url:(id)arg3 pinned:(bool)arg4 pinnedTitle:(id)arg5 pinnedURL:(id)arg6 localAttributes:(id)arg7 deviceIdentifier:(id)arg8;
- (bool)isBlank;
- (bool)isEqual:(id)arg1;
- (bool)isIdentical:(id)arg1;
- (bool)isInUnnamedTabGroup;
- (bool)isInserted;
- (bool)isMarkedAsRead;
- (bool)isPinned;
- (bool)isPrivateBrowsing;
- (bool)isShared;
- (bool)isShowingReader;
- (bool)isSyncable;
- (id)lastSearchTerm;
- (id)localAttributes;
- (bool)matchedLastSearch;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableDuplicate;
- (bool)needsSecureDelete;
- (int)orderIndex;
- (int)parentIdentifier;
- (id)pinnedTitle;
- (id)pinnedURL;
- (id)privacyPreservingDescription;
- (id)readerScrollPositionDictionary;
- (void)setBookmark:(id)arg1;
- (void)setLastSearchTerm:(id)arg1;
- (void)setMatchedLastSearch:(bool)arg1;
- (void)setTitleForLastSearch:(id)arg1;
- (void)setTitleWords:(id)arg1;
- (void)setURLStringComponents:(id)arg1;
- (void)setURLStringForLastSearch:(id)arg1;
- (id)syncPosition;
- (id)syncableURL;
- (id)tabGroupUUID;
- (id)title;
- (id)titleForLastSearch;
- (id)titleWords;
- (id)url;
- (id)uuid;
- (id)uuidString;
- (bool)wasAdded;
- (bool)wasModified;
- (bool)wasMoved;

@end