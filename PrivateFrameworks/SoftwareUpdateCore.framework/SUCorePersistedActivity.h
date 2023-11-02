
@interface SUCorePersistedActivity : NSObject <NSSecureCoding> {
    NSString * _activityName;
    SUCoreActivityOptions * _activityOptions;
}

@property (nonatomic, retain) NSString *activityName;
@property (nonatomic, retain) SUCoreActivityOptions *activityOptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityName;
- (id)activityOptions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init:(id)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setActivityName:(id)arg1;
- (void)setActivityOptions:(id)arg1;

@end
