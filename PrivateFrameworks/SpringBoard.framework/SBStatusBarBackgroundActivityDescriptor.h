
@interface SBStatusBarBackgroundActivityDescriptor : NSObject <NSCopying> {
    NSString * _backgroundActivityIdentifier;
    int  _pid;
}

@property (nonatomic, readonly, copy) NSString *backgroundActivityIdentifier;
@property (nonatomic, readonly) int pid;

- (void).cxx_destruct;
- (id)backgroundActivityIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBackgroundActivityIdentifier:(id)arg1 pid:(int)arg2;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
