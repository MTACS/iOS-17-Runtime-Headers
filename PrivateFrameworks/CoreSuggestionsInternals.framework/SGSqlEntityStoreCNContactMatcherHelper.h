
@interface SGSqlEntityStoreCNContactMatcherHelper : NSObject {
    CNContact * _contact;
    NSSet * _nicks;
}

@property (nonatomic, readonly) NSArray *addressTags;
@property (nonatomic, readonly) NSArray *emailTags;
@property (nonatomic, readonly) NSString *interactionContactIdentifier;
@property (nonatomic, readonly) bool isMe;
@property (nonatomic, readonly) NSArray *phoneTags;
@property (nonatomic, readonly) NSString *prefilterNameMatchTerms;
@property (nonatomic, readonly) NSArray *socialProfileTags;
@property (nonatomic, readonly) NSArray *strongNamePatterns;
@property (nonatomic, readonly) NSArray *weakNamePatterns;

- (void).cxx_destruct;
- (id)addressTags;
- (id)emailTags;
- (id)initWithCNContact:(id)arg1;
- (id)interactionContactIdentifier;
- (bool)isMe;
- (id)phoneTags;
- (id)prefilterNameMatchTerms;
- (id)socialProfileTags;
- (id)strongNamePatterns;
- (id)weakNamePatterns;

@end
