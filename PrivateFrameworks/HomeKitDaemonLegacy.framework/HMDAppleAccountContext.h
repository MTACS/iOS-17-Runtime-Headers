
@interface HMDAppleAccountContext : HMFObject <HMFObject> {
    NSString * _alternateDSID;
    NSString * _identifier;
    NSString * _username;
}

@property (readonly, copy) NSString *alternateDSID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *username;

- (void).cxx_destruct;
- (id)alternateDSID;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)username;

@end
