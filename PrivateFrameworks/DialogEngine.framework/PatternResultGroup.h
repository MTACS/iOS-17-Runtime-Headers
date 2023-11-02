
@interface PatternResultGroup : NSObject {
    NSString * _dialogId;
    NSString * _name;
    NSString * _patternId;
    NSString * _visualId;
}

@property (nonatomic, retain) NSString *dialogId;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *patternId;
@property (nonatomic, retain) NSString *visualId;

- (void).cxx_destruct;
- (id)dialogId;
- (id)name;
- (id)patternId;
- (void)setDialogId:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPatternId:(id)arg1;
- (void)setVisualId:(id)arg1;
- (id)visualId;

@end
