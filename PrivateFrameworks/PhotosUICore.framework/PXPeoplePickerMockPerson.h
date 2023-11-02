
@interface PXPeoplePickerMockPerson : PHPerson {
    NSString * _mockLocalIdentifier;
    NSString * _mockName;
}

@property (nonatomic, retain) NSString *mockLocalIdentifier;
@property (nonatomic, retain) NSString *mockName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithLocalIdentifier:(id)arg1 displayName:(id)arg2;
- (id)localIdentifier;
- (id)mockLocalIdentifier;
- (id)mockName;
- (id)px_localizedName;
- (void)setMockLocalIdentifier:(id)arg1;
- (void)setMockName:(id)arg1;

@end
