
@interface CLSEKSharee : NSObject <NSCoding> {
    NSString * _emailAddress;
    bool  _isCurrentUserForScheduling;
    bool  _isCurrentUserForSharing;
    NSString * _name;
}

@property (readonly) NSString *emailAddress;
@property (readonly) bool isCurrentUserForScheduling;
@property (readonly) bool isCurrentUserForSharing;
@property (readonly) NSString *name;

- (void).cxx_destruct;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKSharee:(id)arg1;
- (bool)isCurrentUserForScheduling;
- (bool)isCurrentUserForSharing;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
