
@interface TTKTestCaseReader : NSObject

+ (id)loadFromDir:(id)arg1;
+ (id)loadFromFile:(id)arg1;
+ (id)loadFromFile:(id)arg1 inputMode:(id)arg2 layouts:(id)arg3;
+ (id)loadFromPath:(id)arg1;
+ (id)loadFromPath:(id)arg1 fileManager:(id)arg2;

@end
