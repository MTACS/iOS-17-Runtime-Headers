
@interface _PSAutocompleteSuggestion : NSObject <NSSecureCoding> {
    NSString * _chatGuid;
    NSArray * _chatHandles;
    NSString * _contactIdentifier;
    NSString * _displayName;
    NSString * _handle;
    NSArray * _recipients;
    unsigned long long  _resultSourceType;
}

@property (nonatomic, readonly, copy) NSString *chatGuid;
@property (nonatomic, readonly, copy) NSArray *chatHandles;
@property (nonatomic, readonly, copy) NSString *contactIdentifier;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic) unsigned long long resultSourceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chatGuid;
- (id)chatHandles;
- (id)contactIdentifier;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithChatGuid:(id)arg1 chatHandles:(id)arg2 displayName:(id)arg3 handle:(id)arg4 contactIdentifier:(id)arg5 resultSourceType:(unsigned long long)arg6 autocompleteResult:(id)arg7;
- (id)initWithChatGuid:(id)arg1 chatHandles:(id)arg2 displayName:(id)arg3 handle:(id)arg4 contactIdentifier:(id)arg5 resultSourceType:(unsigned long long)arg6 autocompleteResult:(id)arg7 recipients:(id)arg8;
- (id)initWithChatGuid:(id)arg1 displayName:(id)arg2 handle:(id)arg3 contactIdentifier:(id)arg4 resultSourceType:(unsigned long long)arg5 autocompleteResult:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)recipients;
- (unsigned long long)resultSourceType;
- (void)setRecipients:(id)arg1;
- (void)setResultSourceType:(unsigned long long)arg1;

@end
