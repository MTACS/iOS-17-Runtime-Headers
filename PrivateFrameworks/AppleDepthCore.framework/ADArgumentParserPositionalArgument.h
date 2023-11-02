
@interface ADArgumentParserPositionalArgument : NSObject {
    NSDictionary * _conversionDictionary;
    NSString * _descriptionString;
    NSString * _name;
    unsigned long long  _type;
    id  _value;
}

@property (nonatomic, readonly, retain) NSDictionary *conversionDictionary;
@property (nonatomic, readonly, retain) NSString *descriptionString;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, retain) id value;

+ (id)enumArgument:(SEL)arg1 description:(id)arg2 conversionDictionary:(id)arg3;
+ (id)floatArgument:(SEL)arg1 description:(id)arg2;
+ (id)integerArgument:(SEL)arg1 description:(id)arg2;
+ (id)stringArgument:(SEL)arg1 description:(id)arg2;

- (void).cxx_destruct;
- (id)conversionDictionary;
- (id)descriptionString;
- (id)fullUsage;
- (id)initWithName:(SEL)arg1 description:(id)arg2 type:(unsigned long long)arg3 conversionDictionary:(id)arg4;
- (id)legalValuesString;
- (id)name;
- (bool)setPropertyFromMap:(struct map<std::string, docopt::value, std::less<std::string>, std::allocator<std::pair<const std::string, docopt::value>>> { struct __tree<std::__value_type<std::string, docopt::value>, std::__map_value_compare<std::string, std::__value_type<std::string, docopt::value>, std::less<std::string>>, std::allocator<std::__value_type<std::string, docopt::value>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, docopt::value>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, docopt::value>, std::less<std::string>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg1 toCommand:(id)arg2;
- (id)shortUsage;
- (unsigned long long)type;
- (id)value;

@end
