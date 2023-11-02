
@interface PGMessageProfile : NSObject <NSSecureCoding> {
    NSMutableDictionary * _addressMentionsByContactIdentifier;
    NSMutableDictionary * _cnIdentifiersByChatIdentifier;
    NSSet * _groupChatIdentifiers;
    NSMutableDictionary * _numberOfLoveEmojisByPersonLocalIdentifier;
    NSMutableDictionary * _numberOfMessagesPerChatIdentifier;
    NSMutableDictionary * _personalChatIdentifierByContactIdentifier;
    NSSet * _personalChatIdentifiers;
    PHPhotoLibrary * _photoLibrary;
}

@property (nonatomic, retain) NSMutableDictionary *addressMentionsByContactIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *cnIdentifiersByChatIdentifier;
@property (nonatomic, readonly) NSSet *groupChatIdentifiers;
@property (nonatomic, readonly) NSMutableDictionary *numberOfLoveEmojisByPersonLocalIdentifier;
@property (nonatomic, retain) NSMutableDictionary *numberOfMessagesPerChatIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *personalChatIdentifierByContactIdentifier;
@property (nonatomic, readonly) NSSet *personalChatIdentifiers;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;

+ (id)persistedMessageProfileWithPhotoLibrary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionary;
- (id)addressMentionsByContactIdentifier;
- (id)cnIdentifiersByChatIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateContactIdentifiersAndMentionedAddressesUsingBlock:(id /* block */)arg1;
- (void)enumerateMessageGroupsWithProgressBlock:(id /* block */)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePersonLocalIdentifiersExchangingLoveEmojisWithProgressBlock:(id /* block */)arg1 usingBlock:(id /* block */)arg2;
- (id)groupChatIdentifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupChatIdentifiers:(id)arg1 personalChatIdentifiers:(id)arg2 personsByChatIdentifier:(id)arg3 photoLibrary:(id)arg4;
- (id)numberOfLoveEmojisByPersonLocalIdentifier;
- (unsigned long long)numberOfMessageGroupChats;
- (id)numberOfMessagesByContactIdentifier;
- (id)numberOfMessagesPerChatIdentifier;
- (bool)persistOnDisk;
- (id)personalChatIdentifierByContactIdentifier;
- (id)personalChatIdentifiers;
- (id)photoLibrary;
- (void)registerLoveEmoji:(unsigned long long)arg1 forPersonLocalIdentifier:(id)arg2;
- (void)registerMentionedLocation:(id)arg1 contactIdentifier:(id)arg2 onDate:(id)arg3;
- (void)registerMessageForChatIdentifier:(id)arg1;
- (void)setAddressMentionsByContactIdentifier:(id)arg1;
- (void)setNumberOfMessagesPerChatIdentifier:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;

@end
