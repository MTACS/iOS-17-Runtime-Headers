
@interface FATField : NSObject {
    unsigned int  _index;
    FATField * _keyField;
    NSString * _name;
    bool  _optional;
    Class  _structClass;
    unsigned int  _type;
    FATField * _valueField;
}

@property unsigned int index;
@property (nonatomic, retain) FATField *keyField;
@property (nonatomic, retain) NSString *name;
@property bool optional;
@property (nonatomic) Class structClass;
@property unsigned int type;
@property (nonatomic, retain) FATField *valueField;

+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(bool)arg3 name:(id)arg4;
+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(bool)arg3 name:(id)arg4 keyField:(id)arg5 valueField:(id)arg6;
+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(bool)arg3 name:(id)arg4 structClass:(Class)arg5;
+ (id)fieldWithIndex:(unsigned int)arg1 type:(unsigned int)arg2 optional:(bool)arg3 name:(id)arg4 valueField:(id)arg5;
+ (id)nameForFatFieldType:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)index;
- (id)keyField;
- (id)name;
- (bool)optional;
- (void)setIndex:(unsigned int)arg1;
- (void)setKeyField:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOptional:(bool)arg1;
- (void)setStructClass:(Class)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setValueField:(id)arg1;
- (Class)structClass;
- (unsigned int)type;
- (id)valueField;

@end
