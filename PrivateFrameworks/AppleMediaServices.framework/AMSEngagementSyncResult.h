
@interface AMSEngagementSyncResult : NSObject <NSSecureCoding> {
    NSArray * _actions;
}

@property (nonatomic, retain) NSArray *actions;

+ (id)archiveClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActions:(id)arg1;

@end
