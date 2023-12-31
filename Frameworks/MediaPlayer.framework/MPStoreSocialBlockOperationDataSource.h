
@interface MPStoreSocialBlockOperationDataSource : NSObject <MPStoreSocialRequestOperationDataSource> {
    MPModelSocialPerson * _person;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPModelSocialPerson *person;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bagKey;
- (id)httpBody;
- (long long)httpBodyType;
- (long long)httpMethod;
- (id)person;
- (id)queryItems;
- (void)setPerson:(id)arg1;

@end
