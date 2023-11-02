
@interface _UITextInputSessionReplaceWithCandidateAction : _UITextInputSessionAction {
    long long  _replaceWithCandidateType;
}

@property (nonatomic) long long replaceWithCandidateType;

- (bool)changedContent;
- (long long)replaceWithCandidateType;
- (void)setReplaceWithCandidateType:(long long)arg1;

@end
