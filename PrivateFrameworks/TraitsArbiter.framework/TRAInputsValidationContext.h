
@interface TRAInputsValidationContext : NSObject {
    NSArray * _acquiredParticipants;
}

@property (nonatomic, readonly) NSArray *acquiredParticipants;

- (void).cxx_destruct;
- (id)acquiredParticipants;
- (id)initWithAcquiredParticipants:(id)arg1;

@end
