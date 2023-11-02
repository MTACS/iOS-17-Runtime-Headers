
@interface EKParticipantForDisplay : NSObject {
    NSMutableAttributedString * _displayString;
    bool  _optionalParticipant;
}

@property (nonatomic, retain) NSMutableAttributedString *displayString;
@property (getter=isOptionalParticipant, nonatomic) bool optionalParticipant;

- (void).cxx_destruct;
- (id)displayString;
- (bool)isOptionalParticipant;
- (void)setDisplayString:(id)arg1;
- (void)setOptionalParticipant:(bool)arg1;

@end
