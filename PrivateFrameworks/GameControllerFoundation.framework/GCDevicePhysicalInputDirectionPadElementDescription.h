
@interface GCDevicePhysicalInputDirectionPadElementDescription : GCDevicePhysicalInputElementDescription <NSSecureCoding> {
    bool  _analog;
    NSArray * _downSources;
    unsigned long long  _eventDownValueField;
    unsigned long long  _eventLeftValueField;
    unsigned long long  _eventRightValueField;
    unsigned long long  _eventUpValueField;
    NSArray * _leftSources;
    NSArray * _rightSources;
    NSArray * _upSources;
    NSArray * _xSources;
    NSArray * _ySources;
}

@property (getter=isAnalog, nonatomic) bool analog;
@property (nonatomic, copy) NSArray *downSources;
@property (nonatomic) unsigned long long eventDownValueField;
@property (nonatomic) unsigned long long eventLeftValueField;
@property (nonatomic) unsigned long long eventRightValueField;
@property (nonatomic) unsigned long long eventUpValueField;
@property (nonatomic, copy) NSArray *leftSources;
@property (nonatomic, copy) NSArray *rightSources;
@property (nonatomic, copy) NSArray *upSources;
@property (nonatomic, copy) NSArray *xSources;
@property (nonatomic, copy) NSArray *ySources;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)downSources;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventDownValueField;
- (unsigned long long)eventLeftValueField;
- (unsigned long long)eventRightValueField;
- (unsigned long long)eventUpValueField;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAnalog;
- (bool)isEqual:(id)arg1;
- (id)leftSources;
- (id)rightSources;
- (void)setAnalog:(bool)arg1;
- (void)setDownSources:(id)arg1;
- (void)setEventDownValueField:(unsigned long long)arg1;
- (void)setEventLeftValueField:(unsigned long long)arg1;
- (void)setEventRightValueField:(unsigned long long)arg1;
- (void)setEventUpValueField:(unsigned long long)arg1;
- (void)setLeftSources:(id)arg1;
- (void)setRightSources:(id)arg1;
- (void)setUpSources:(id)arg1;
- (void)setXSources:(id)arg1;
- (void)setYSources:(id)arg1;
- (id)upSources;
- (id)xSources;
- (id)ySources;

// Image: /System/Library/Frameworks/GameController.framework/GameController

+ (Class)parametersClass;

- (id)makeParameters;

@end
