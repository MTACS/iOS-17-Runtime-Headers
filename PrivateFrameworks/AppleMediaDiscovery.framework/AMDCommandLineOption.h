
@interface AMDCommandLineOption : NSObject {
    id  _defaultValue;
    NSString * _helpText;
    bool  _isBool;
    NSString * _name;
    NSString * _shortName;
}

@property (nonatomic, retain) id defaultValue;
@property (nonatomic, retain) NSString *helpText;
@property (nonatomic) bool isBool;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *shortName;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)helpText;
- (id)initWithName:(id)arg1 withDefaultValue:(id)arg2 withHelpText:(id)arg3 withShortName:(id)arg4 andIsBoolFlag:(bool)arg5;
- (bool)isBool;
- (id)name;
- (void)setDefaultValue:(id)arg1;
- (void)setHelpText:(id)arg1;
- (void)setIsBool:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setShortName:(id)arg1;
- (id)shortName;

@end
