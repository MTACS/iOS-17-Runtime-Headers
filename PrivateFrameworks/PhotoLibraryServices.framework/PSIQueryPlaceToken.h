
@interface PSIQueryPlaceToken : PSIQueryToken {
    NSDictionary * _locationNameByCategory;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 locationNameByCategory:(id)arg2;
- (id)parentToken;

@end
