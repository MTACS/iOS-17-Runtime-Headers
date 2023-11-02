
@interface SLAttribution : NSObject <NSCopying, NSSecureCoding> {
    NSString * _attachmentGUID;
    _SWCollaborationMetadata * _collaborationMetadata;
    NSString * _conversationIdentifier;
    bool  _fromMe;
    NSString * _groupDisplayName;
    NSUUID * _groupID;
    NSURL * _groupPhotoPath;
    bool  _isGroupConversation;
    bool  _lean;
    bool  _pinned;
    NSArray * _relatedPersons;
    SLPerson * _sender;
    NSString * _sourceAppDisplayName;
    NSDate * _timestamp;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) NSString *attachmentGUID;
@property (nonatomic, readonly) _SWCollaborationMetadata *collaborationMetadata;
@property (nonatomic, readonly, copy) NSString *conversationIdentifier;
@property (getter=isFromMe, nonatomic, readonly) bool fromMe;
@property (nonatomic, readonly, copy) NSString *groupDisplayName;
@property (nonatomic, readonly) NSUUID *groupID;
@property (nonatomic, readonly, copy) NSURL *groupPhotoPath;
@property (nonatomic, readonly) bool isGroupConversation;
@property (getter=isLean) bool lean;
@property (getter=isPinned, nonatomic, readonly) bool pinned;
@property (nonatomic, readonly) NSArray *relatedPersons;
@property (nonatomic, readonly) SLPerson *sender;
@property (nonatomic, readonly, copy) NSString *sourceAppDisplayName;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (id)errorForAttributionDomain:(id)arg1 andCode:(long long)arg2 andUnderlyingError:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attachmentGUID;
- (id)collaborationMetadata;
- (id)conversationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)groupDisplayName;
- (id)groupID;
- (id)groupPhotoPath;
- (unsigned long long)hash;
- (id)initWithCSSearchableItem:(id)arg1 error:(id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)initWithPortraitAttribution:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFromMe;
- (bool)isGroupConversation;
- (bool)isLean;
- (bool)isPinned;
- (id)portraitAttribution;
- (id)relatedPersons;
- (id)sender;
- (void)setLean:(bool)arg1;
- (id)sourceAppDisplayName;
- (id)timestamp;
- (id)uniqueIdentifier;

@end
