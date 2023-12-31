
@interface MPStoreSocialPendingFollowRequestOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource> {
    long long  _action;
    MPModelSocialPerson * _person;
}

@property (nonatomic, readonly) long long action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPModelSocialPerson *person;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionTypeString;
- (long long)action;
- (id)bagKey;
- (id)fallbackBagKeys;
- (id)httpBody;
- (long long)httpBodyType;
- (long long)httpMethod;
- (id)initWithAction:(long long)arg1;
- (id)person;
- (id)queryItems;
- (void)setPerson:(id)arg1;

@end
