
@interface ASDSelectorValue : NSObject {
    unsigned int  _kind;
    NSString * _name;
    bool  _prevSelected;
    bool  _selected;
    unsigned int  _value;
}

@property (nonatomic) unsigned int kind;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool prevSelected;
@property (nonatomic) bool selected;
@property (nonatomic) unsigned int value;

+ (id)withValue:(unsigned int)arg1;
+ (id)withValue:(unsigned int)arg1 andName:(id)arg2;
+ (id)withValue:(unsigned int)arg1 andName:(id)arg2 selected:(bool)arg3;
+ (id)withValue:(unsigned int)arg1 name:(id)arg2 andKind:(unsigned int)arg3;
+ (id)withValue:(unsigned int)arg1 name:(id)arg2 andKind:(unsigned int)arg3 selected:(bool)arg4;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithValue:(unsigned int)arg1 name:(id)arg2 andKind:(unsigned int)arg3 selected:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned int)kind;
- (id)name;
- (bool)prevSelected;
- (bool)selected;
- (void)setKind:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setPrevSelected:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setValue:(unsigned int)arg1;
- (unsigned int)value;

@end
