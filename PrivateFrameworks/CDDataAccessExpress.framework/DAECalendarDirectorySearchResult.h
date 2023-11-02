
@interface DAECalendarDirectorySearchResult : NSObject <NSSecureCoding> {
    NSString * _displayName;
    NSString * _firstName;
    NSString * _lastName;
    NSString * _preferredAddress;
    NSString * _principalPath;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSString *preferredAddress;
@property (nonatomic, retain) NSString *principalPath;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (id)initWithCoder:(id)arg1;
- (id)lastName;
- (id)preferredAddress;
- (id)principalPath;
- (void)setDisplayName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setPreferredAddress:(id)arg1;
- (void)setPrincipalPath:(id)arg1;

@end
