
@interface ICASCollaborationActionData : NSObject <AADataEventType> {
    ICASCollaborationActionType * _collaborationActionType;
    ICASCollaborationInviteStep * _collaborationInviteStep;
    NSString * _collaborationMethod;
}

@property (nonatomic, readonly) ICASCollaborationActionType *collaborationActionType;
@property (nonatomic, readonly) ICASCollaborationInviteStep *collaborationInviteStep;
@property (nonatomic, readonly) NSString *collaborationMethod;

+ (id)dataName;

- (void).cxx_destruct;
- (id)collaborationActionType;
- (id)collaborationInviteStep;
- (id)collaborationMethod;
- (id)initWithCollaborationActionType:(id)arg1 collaborationInviteStep:(id)arg2 collaborationMethod:(id)arg3;
- (id)toDict;

@end
