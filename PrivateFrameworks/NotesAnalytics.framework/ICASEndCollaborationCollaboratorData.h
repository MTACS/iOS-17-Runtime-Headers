
@interface ICASEndCollaborationCollaboratorData : NSObject <AADataEventType> {
    NSNumber * _endAcceptedCount;
    NSNumber * _endInvitedCount;
}

@property (nonatomic, readonly) NSNumber *endAcceptedCount;
@property (nonatomic, readonly) NSNumber *endInvitedCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)endAcceptedCount;
- (id)endInvitedCount;
- (id)initWithEndInvitedCount:(id)arg1 endAcceptedCount:(id)arg2;
- (id)toDict;

@end
