
@interface PPSocialAttribution : NSObject <NSSecureCoding> {
    NSData * _collaborationMetadata;
    NSString * _conversationIdentifier;
    bool  _fromMe;
    NSString * _groupDisplayName;
    NSString * _groupId;
    NSURL * _groupPhotoPath;
    NSString * _identifier;
    NSArray * _relatedPeople;
    PPSocialPerson * _sender;
    NSString * _sourceAppDisplayName;
    bool  _starred;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) NSData *collaborationMetadata;
@property (nonatomic, readonly) NSString *conversationIdentifier;
@property (getter=isFromMe, nonatomic, readonly) bool fromMe;
@property (nonatomic, readonly) NSString *groupDisplayName;
@property (nonatomic, readonly) NSString *groupId;
@property (nonatomic, readonly) NSURL *groupPhotoPath;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *relatedPeople;
@property (nonatomic, readonly) PPSocialPerson *sender;
@property (nonatomic, readonly) NSString *sourceAppDisplayName;
@property (getter=isStarred, nonatomic, readonly) bool starred;
@property (nonatomic, readonly) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collaborationMetadata;
- (id)conversationIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupDisplayName;
- (id)groupId;
- (id)groupPhotoPath;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sourceAppDisplayName:(id)arg2 conversationIdentifier:(id)arg3 groupPhotoPath:(id)arg4 groupDisplayName:(id)arg5 groupId:(id)arg6 relatedPeople:(id)arg7 sender:(id)arg8 timestamp:(id)arg9 collaborationMetadata:(id)arg10 starred:(bool)arg11 fromMe:(bool)arg12;
- (id)initWithIdentifier:(id)arg1 sourceAppDisplayName:(id)arg2 conversationIdentifier:(id)arg3 groupPhotoPath:(id)arg4 groupDisplayName:(id)arg5 relatedPeople:(id)arg6 sender:(id)arg7 timestamp:(id)arg8;
- (id)initWithIdentifier:(id)arg1 sourceAppDisplayName:(id)arg2 conversationIdentifier:(id)arg3 groupPhotoPath:(id)arg4 groupDisplayName:(id)arg5 relatedPeople:(id)arg6 sender:(id)arg7 timestamp:(id)arg8 collaborationMetadata:(id)arg9 starred:(bool)arg10 fromMe:(bool)arg11;
- (id)initWithIdentifier:(id)arg1 sourceAppDisplayName:(id)arg2 conversationIdentifier:(id)arg3 groupPhotoPath:(id)arg4 groupDisplayName:(id)arg5 relatedPeople:(id)arg6 sender:(id)arg7 timestamp:(id)arg8 starred:(bool)arg9;
- (id)initWithIdentifier:(id)arg1 sourceAppDisplayName:(id)arg2 conversationIdentifier:(id)arg3 groupPhotoPath:(id)arg4 groupDisplayName:(id)arg5 relatedPeople:(id)arg6 sender:(id)arg7 timestamp:(id)arg8 starred:(bool)arg9 fromMe:(bool)arg10;
- (bool)isFromMe;
- (bool)isStarred;
- (id)relatedPeople;
- (id)sender;
- (id)sourceAppDisplayName;
- (id)timestamp;

@end
