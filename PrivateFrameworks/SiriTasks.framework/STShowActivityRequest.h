
@interface STShowActivityRequest : AFSiriRequest {
    long long  _dataType;
    long long  _view;
}

+ (bool)supportsSecureCoding;

- (id)_initWithDataType:(long long)arg1 view:(long long)arg2;
- (id)createResponse;
- (long long)dataType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)view;

@end
