
@interface TRAPreferencesTreeNodeSpecification : NSObject <BSDescriptionProviding, NSCopying> {
    double  _order;
    TRAParticipant * _parentParticipant;
    TRAParticipant * _participant;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double order;
@property (nonatomic, retain) TRAParticipant *parentParticipant;
@property (nonatomic, retain) TRAParticipant *participant;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithParticipant:(id)arg1 parentParticipant:(id)arg2;
- (bool)isEqual:(id)arg1;
- (double)order;
- (id)parentParticipant;
- (id)participant;
- (void)setOrder:(double)arg1;
- (void)setParentParticipant:(id)arg1;
- (void)setParticipant:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
