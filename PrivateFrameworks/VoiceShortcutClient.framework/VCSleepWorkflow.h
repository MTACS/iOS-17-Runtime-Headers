
@interface VCSleepWorkflow : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _actions;
    NSString * _name;
    NSString * _summaryString;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, readonly, copy) NSString *bundleIdentifierForDisplay;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly, copy) NSString *summaryString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)bundleIdentifierForDisplay;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActions:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)summaryString;

@end
