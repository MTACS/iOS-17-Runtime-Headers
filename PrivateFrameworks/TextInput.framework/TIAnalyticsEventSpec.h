
@interface TIAnalyticsEventSpec : NSObject {
    NSArray * _fieldSpecs;
    NSDictionary * _fieldSpecsByName;
    bool  _isInputModeRequired;
    NSString * _name;
}

@property (nonatomic, readonly) NSArray *fieldSpecs;
@property (nonatomic, readonly) NSDictionary *fieldSpecsByName;
@property (nonatomic, readonly) bool isInputModeRequired;
@property (nonatomic, readonly) NSString *name;

+ (id)eventSpecWithName:(id)arg1 inputModeRequired:(bool)arg2;
+ (id)eventSpecWithName:(id)arg1 inputModeRequired:(bool)arg2 fieldSpecs:(id)arg3;

- (void).cxx_destruct;
- (id)fieldSpecWithName:(id)arg1;
- (id)fieldSpecs;
- (id)fieldSpecsByName;
- (id)initWithName:(id)arg1 inputModeRequired:(bool)arg2 fieldSpecs:(id)arg3;
- (bool)isInputModeRequired;
- (id)name;

@end
