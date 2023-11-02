
@interface THAController : NSObject {
    bool  _connected;
    unsigned int  _identifier;
    NSString * _name;
    bool  _selected;
    NSSet * _selectedButtons;
    bool  _supportsSiri;
    unsigned long long  _ticksPerSecond;
}

@property (nonatomic) bool connected;
@property (nonatomic, readonly) unsigned int identifier;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool selected;
@property (nonatomic, retain) NSSet *selectedButtons;
@property (nonatomic) bool supportsSiri;
@property (nonatomic) unsigned long long ticksPerSecond;

+ (id)selectButtonConfiguration:(id)arg1 supportsSiri:(bool)arg2;

- (void).cxx_destruct;
- (bool)connected;
- (bool)dispatchButtonEvent:(id)arg1;
- (unsigned int)identifier;
- (id)initWithName:(id)arg1 identifier:(unsigned int)arg2 ticksPerSecond:(unsigned long long)arg3 supportedButtons:(id)arg4 supportsSiri:(bool)arg5;
- (id)name;
- (bool)selected;
- (id)selectedButtons;
- (void)setConnected:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedButtons:(id)arg1;
- (void)setSupportsSiri:(bool)arg1;
- (void)setTicksPerSecond:(unsigned long long)arg1;
- (bool)supportsSiri;
- (unsigned long long)ticksPerSecond;
- (void)updateSelectedButtons:(id)arg1;

@end
