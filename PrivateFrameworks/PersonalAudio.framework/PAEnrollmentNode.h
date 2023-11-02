
@interface PAEnrollmentNode : NSObject {
    PAConfiguration * _configuration;
    NSString * _heading;
    bool  _hideVisualizer;
    unsigned long long  _index;
    NSString * _instructions;
    NSString * _name;
    NSArray * _options;
    unsigned long long  _section;
    bool  _selected;
    NSArray * _stimuli;
    unsigned long long  _totalSteps;
    unsigned long long  _type;
}

@property (nonatomic, retain) PAConfiguration *configuration;
@property (nonatomic, retain) NSString *heading;
@property (nonatomic) bool hideVisualizer;
@property (nonatomic) unsigned long long index;
@property (nonatomic, retain) NSString *instructions;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSArray *options;
@property (nonatomic) unsigned long long section;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, retain) NSArray *stimuli;
@property (nonatomic) unsigned long long totalSteps;
@property (nonatomic) unsigned long long type;

+ (id)nodeWithSection:(unsigned long long)arg1 andType:(unsigned long long)arg2 comparing:(unsigned long long)arg3 with:(unsigned long long)arg4;
+ (id)nodeWithSection:(unsigned long long)arg1 type:(unsigned long long)arg2 andConfiguration:(id)arg3;

- (void).cxx_destruct;
- (id)configuration;
- (id)description;
- (id)heading;
- (bool)hideVisualizer;
- (unsigned long long)index;
- (id)instructions;
- (bool)isEqual:(id)arg1;
- (bool)isSelected;
- (id)key;
- (id)name;
- (id)options;
- (id)progressDescription;
- (unsigned long long)section;
- (void)setConfiguration:(id)arg1;
- (void)setHeading:(id)arg1;
- (void)setHideVisualizer:(bool)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setInstructions:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setSection:(unsigned long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setStimuli:(id)arg1;
- (void)setTotalSteps:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)stimuli;
- (unsigned long long)totalSteps;
- (unsigned long long)type;

@end
