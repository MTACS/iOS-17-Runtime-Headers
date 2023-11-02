
@interface BCSBusinessItem : BCSItem <NSCopying, NSSecureCoding> {
    unsigned long long  _backgroundColor;
    NSString * _bizID;
    NSArray * _callToActions;
    BCSOpenHours * _callingOpenHours;
    NSString * _groupID;
    NSString * _intentID;
    bool  _isVerified;
    BCSBusinessItemIdentifier * _itemIdentifier;
    BCSOpenHours * _messagingOpenHours;
    NSString * _name;
    long long  _phoneHash;
    NSString * _phoneNumber;
    NSURL * _squareLogoURL;
    unsigned long long  _tintColor;
    NSArray * _visibilityItems;
    NSURL * _wideLogoURL;
}

@property (nonatomic, readonly) unsigned long long backgroundColor;
@property (nonatomic, readonly, copy) NSString *bizID;
@property (getter=_businessItemIdentifier, nonatomic, readonly) BCSBusinessItemIdentifier *businessItemIdentifier;
@property (nonatomic, readonly) NSString *callSubtitle;
@property (nonatomic, readonly) NSArray *callToActions;
@property (nonatomic, readonly) BCSOpenHours *callingOpenHours;
@property (nonatomic, readonly) NSDate *dateWhenCallingAvailableNext;
@property (nonatomic, readonly) NSDate *dateWhenMessagingAvailableNext;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSString *intentID;
@property (nonatomic, readonly) bool isAvailableForCalling;
@property (nonatomic, readonly) bool isAvailableForMessaging;
@property (nonatomic, readonly) bool isVerified;
@property (nonatomic, readonly) NSString *messageSubtitle;
@property (nonatomic, readonly) NSString *messageTitle;
@property (nonatomic, readonly) NSURL *messagesOpenURL;
@property (nonatomic, readonly) BCSOpenHours *messagingOpenHours;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long phoneHash;
@property (nonatomic, readonly, copy) NSString *phoneNumber;
@property (nonatomic, readonly, copy) NSURL *squareLogoURL;
@property (nonatomic, readonly) unsigned long long tintColor;
@property (nonatomic, readonly) NSArray *visibilityItems;
@property (nonatomic, readonly, copy) NSURL *wideLogoURL;

// Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService

+ (id)businessItemsFromChatSuggestJSONObj:(id)arg1;
+ (id)businessItemsFromChatSuggestMessageDictionary:(id)arg1;
+ (id)businessItemsFromRecords:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_businessItemIdentifier;
- (unsigned long long)_integerForHexString:(id)arg1;
- (bool)_isChatSuggestVisibleForVisibilityItem:(id)arg1 messagesIdentifier:(id)arg2 bizID:(id)arg3;
- (id)_selectedVisibilityItemForLanguage:(id)arg1 country:(id)arg2;
- (unsigned long long)backgroundColor;
- (id)bizID;
- (id)callSubtitle;
- (id)callToAction;
- (id)callToActions;
- (id)callingOpenHours;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateWhenCallingAvailableNext;
- (id)dateWhenMessagingAvailableNext;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (id)initWithBizID:(id)arg1 phoneNumber:(id)arg2 name:(id)arg3 phoneHash:(long long)arg4 squareLogoURL:(id)arg5 wideLogoURL:(id)arg6 tintColor:(unsigned long long)arg7 backgroundColor:(unsigned long long)arg8 callToActions:(id)arg9 messagingOpenHours:(id)arg10 callingOpenHours:(id)arg11 isVerified:(bool)arg12 intentID:(id)arg13 groupID:(id)arg14 visibilityItems:(id)arg15;
- (id)initWithChatSuggestMessage:(id)arg1 bucketID:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObj:(id)arg1;
- (id)intentID;
- (bool)isAvailableForCalling;
- (bool)isAvailableForMessaging;
- (bool)isVerified;
- (id)itemIdentifier;
- (bool)matchesItemIdentifying:(id)arg1;
- (id)messageSubtitle;
- (id)messageTitle;
- (id)messagesOpenURL;
- (id)messagingOpenHours;
- (id)name;
- (long long)phoneHash;
- (id)phoneNumber;
- (id)squareLogoURL;
- (unsigned long long)tintColor;
- (long long)truncatedHash;
- (long long)type;
- (id)visibilityItems;
- (id)wideLogoURL;

// Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat

- (id)makeBrandedHeaderViewController;

@end
