
@interface EDAMBusinessInvitation : FATObject {
    NSNumber * _businessId;
    NSNumber * _created;
    NSString * _email;
    NSNumber * _fromWorkChat;
    NSNumber * _requesterId;
    NSNumber * _role;
    NSNumber * _status;
}

@property (nonatomic, retain) NSNumber *businessId;
@property (nonatomic, retain) NSNumber *created;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) NSNumber *fromWorkChat;
@property (nonatomic, retain) NSNumber *requesterId;
@property (nonatomic, retain) NSNumber *role;
@property (nonatomic, retain) NSNumber *status;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)businessId;
- (id)created;
- (id)email;
- (id)fromWorkChat;
- (id)requesterId;
- (id)role;
- (void)setBusinessId:(id)arg1;
- (void)setCreated:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setFromWorkChat:(id)arg1;
- (void)setRequesterId:(id)arg1;
- (void)setRole:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
