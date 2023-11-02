
@interface ADArgumentParserOptionalArgument : NSObject {
    NSDictionary * _conversionDictionary;
    NSString * _descriptionString;
    NSString * _name;
    BOOL  _shortName;
    unsigned long long  _type;
    id  _value;
}

@property (nonatomic, readonly, retain) NSDictionary *conversionDictionary;
@property (nonatomic, readonly, retain) NSString *descriptionString;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly) BOOL shortName;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, retain) id value;

+ (id)boolOption:(SEL)arg1 shortName:(BOOL)arg2 description:(id)arg3;
+ (id)enumOption:(SEL)arg1 shortName:(BOOL)arg2 defaultValue:(unsigned long long)arg3 description:(id)arg4 conversionDictionary:(id)arg5;
+ (id)floatArrayOption:(SEL)arg1 shortName:(BOOL)arg2 defaultValue:(id)arg3 description:(id)arg4;
+ (id)floatOption:(SEL)arg1 shortName:(BOOL)arg2 defaultValue:(float)arg3 description:(id)arg4;
+ (id)integerArrayOption:(SEL)arg1 shortName:(BOOL)arg2 defaultValue:(id)arg3 description:(id)arg4;
+ (id)integerOption:(SEL)arg1 shortName:(BOOL)arg2 defaultValue:(long long)arg3 description:(id)arg4;
+ (id)stringArrayOption:(SEL)arg1 shortName:(BOOL)arg2 defaultValue:(id)arg3 description:(id)arg4;
+ (id)stringOption:(SEL)arg1 shortName:(BOOL)arg2 defaultValue:(id)arg3 description:(id)arg4;

- (void).cxx_destruct;
- (id)conversionDictionary;
- (id)defaultValueString;
- (id)descriptionString;
- (id)fullUsage;
- (id)initWithName:(SEL)arg1 shortName:(BOOL)arg2 defaultValue:(id)arg3 description:(id)arg4 type:(unsigned long long)arg5 conversionDictionary:(id)arg6;
- (id)legalValuesString;
- (id)name;
- (bool)setPropertyFromMap:(struct map<std::string, docopt::value, std::less<std::string>, std::allocator<std::pair<const std::string, docopt::value>>> { struct __tree<std::__value_type<std::string, docopt::value>, std::__map_value_compare<std::string, std::__value_type<std::string, docopt::value>, std::less<std::string>>, std::allocator<std::__value_type<std::string, docopt::value>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, docopt::value>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, docopt::value>, std::less<std::string>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1 toCommand:(id)arg2;
- (BOOL)shortName;
- (id)shortUsage;
- (unsigned long long)type;
- (id)value;

@end
