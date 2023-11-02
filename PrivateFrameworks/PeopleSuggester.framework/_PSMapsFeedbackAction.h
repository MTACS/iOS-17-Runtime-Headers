
@interface _PSMapsFeedbackAction : _PSFeedbackAction {
    NSString * _contactId;
    NSString * _handle;
}

@property (nonatomic, readonly, copy) NSString *contactId;
@property (nonatomic, readonly, copy) NSString *handle;

+ (id)engagementWithNonSuggestionWithContactIdentifier:(id)arg1 handle:(id)arg2;
+ (id)engagementWithSuggestionWithContactIdentifier:(id)arg1 handle:(id)arg2;

- (void).cxx_destruct;
- (id)contactId;
- (id)handle;
- (id)initWithContactIdentifier:(id)arg1 handle:(id)arg2 type:(long long)arg3;

@end
