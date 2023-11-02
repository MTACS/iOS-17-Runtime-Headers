
@interface WFPythonHTMLAttribute : NSObject {
    NSString * _name;
    NSString * _value;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 value:(id)arg2;
- (id)name;
- (id)value;

@end
