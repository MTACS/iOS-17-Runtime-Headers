
@interface MTHashAction : MTTreatmentAction {
    MTIDScheme * _scheme;
}

@property (nonatomic, retain) MTIDScheme *scheme;

- (void).cxx_destruct;
- (id)hashOf:(id)arg1 userId:(id)arg2;
- (id)initWithField:(id)arg1 configDictionary:(id)arg2;
- (id)performAction:(id)arg1 context:(id)arg2;
- (id)scheme;
- (void)setScheme:(id)arg1;

@end
