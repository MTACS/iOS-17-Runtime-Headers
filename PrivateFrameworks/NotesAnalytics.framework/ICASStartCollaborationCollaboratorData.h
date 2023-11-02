
@interface ICASStartCollaborationCollaboratorData : NSObject <AADataEventType> {
    NSNumber * _startAcceptedCount;
    NSNumber * _startInvitedCount;
}

@property (nonatomic, readonly) NSNumber *startAcceptedCount;
@property (nonatomic, readonly) NSNumber *startInvitedCount;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithStartInvitedCount:(id)arg1 startAcceptedCount:(id)arg2;
- (id)startAcceptedCount;
- (id)startInvitedCount;
- (id)toDict;

@end
