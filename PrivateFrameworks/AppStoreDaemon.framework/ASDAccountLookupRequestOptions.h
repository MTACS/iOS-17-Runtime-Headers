
@interface ASDAccountLookupRequestOptions : ASDRequestOptions {
    bool  _authIfNeeded;
}

@property (nonatomic) bool authIfNeeded;

+ (bool)supportsSecureCoding;

- (bool)authIfNeeded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAuthIfNeeded:(bool)arg1;

@end
