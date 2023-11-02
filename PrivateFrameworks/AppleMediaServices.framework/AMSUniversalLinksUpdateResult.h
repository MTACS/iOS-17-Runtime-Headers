
@interface AMSUniversalLinksUpdateResult : NSObject <NSSecureCoding> {
    bool  _success;
}

@property (nonatomic) bool success;

+ (id)archiveClasses;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
