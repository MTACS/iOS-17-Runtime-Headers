
@interface SBSBackgroundActivityAssertionData : NSObject <BSDescriptionProviding, NSSecureCoding> {
    NSSet * _backgroundActivityIdentifiers;
    bool  _exclusive;
    int  _pid;
    bool  _showsWhenForeground;
    NSString * _statusString;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, copy) NSSet *backgroundActivityIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExclusive, nonatomic) bool exclusive;
@property (readonly) unsigned long long hash;
@property (nonatomic) int pid;
@property (nonatomic) bool showsWhenForeground;
@property (nonatomic, copy) NSString *statusString;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundActivityIdentifiers;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackgroundActivityIdentifiers:(id)arg1 forPID:(int)arg2 exclusive:(bool)arg3 showsWhenForeground:(bool)arg4;
- (id)initWithBackgroundActivityIdentifiers:(id)arg1 forPID:(int)arg2 exclusive:(bool)arg3 showsWhenForeground:(bool)arg4 uniqueIdentifier:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isExclusive;
- (int)pid;
- (void)setBackgroundActivityIdentifiers:(id)arg1;
- (void)setExclusive:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setShowsWhenForeground:(bool)arg1;
- (void)setStatusString:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (bool)showsWhenForeground;
- (id)statusString;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uniqueIdentifier;

@end
