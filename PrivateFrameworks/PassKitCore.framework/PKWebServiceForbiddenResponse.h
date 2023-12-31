
@interface PKWebServiceForbiddenResponse : PKWebServiceResponse {
    NSNumber * _errorCode;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
}

@property (nonatomic, copy) NSNumber *errorCode;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)errorCode;
- (id)initWithData:(id)arg1;
- (id)localizedDescription;
- (id)localizedTitle;
- (void)setErrorCode:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;

@end
