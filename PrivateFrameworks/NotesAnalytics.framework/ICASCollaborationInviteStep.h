
@interface ICASCollaborationInviteStep : NSObject <AADataType> {
    long long  _collaborationInviteStep;
}

@property (nonatomic, readonly) long long collaborationInviteStep;

- (long long)collaborationInviteStep;
- (id)initWithCollaborationInviteStep:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
