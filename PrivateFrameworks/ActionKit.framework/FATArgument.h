
@interface FATArgument : NSObject {
    FATField * _field;
    id  _value;
}

@property (nonatomic, retain) FATField *field;
@property (nonatomic, retain) id value;

+ (id)argumentWithField:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (id)field;
- (void)setField:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
