
@interface PKAccountWebServiceAccountUserInfoResponse : PKAccountWebServiceResponse {
    CNContact * _primaryUser;
}

@property (nonatomic, readonly) CNContact *primaryUser;

+ (bool)jsonDataOptional;

- (void).cxx_destruct;
- (id)_stringValueFromDictionary:(id)arg1 key:(id)arg2 isOptional:(bool)arg3;
- (id)initWithData:(id)arg1;
- (id)primaryUser;

@end
