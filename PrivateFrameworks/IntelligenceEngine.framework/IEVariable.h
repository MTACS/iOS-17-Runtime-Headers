
@interface IEVariable : NSObject {
    NSString * _name;
    bool  _persistent;
    NSString * _type;
    id  _value;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool persistent;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 withType:(id)arg2;
- (id)initWithName:(id)arg1 withType:(id)arg2 withValue:(id)arg3;
- (id)name;
- (bool)persistent;
- (void)setName:(id)arg1;
- (void)setPersistent:(bool)arg1;
- (void)setType:(id)arg1;
- (void)setValue:(id)arg1;
- (id)type;
- (id)value;

@end
