
@interface CADisplayPersistedPreferredMode : NSObject <NSSecureCoding> {
    NSDictionary * _mode;
    NSString * _uuid;
}

@property (nonatomic, copy) NSDictionary *mode;
@property (nonatomic, copy) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mode;
- (void)setMode:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
