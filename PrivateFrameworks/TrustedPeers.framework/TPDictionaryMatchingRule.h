
@interface TPDictionaryMatchingRule : NSObject

+ (id)andMatch:(id)arg1;
+ (id)falseMatch;
+ (id)fieldExists:(id)arg1;
+ (id)fieldMatch:(id)arg1 fieldRegex:(id)arg2;
+ (id)notMatch:(id)arg1;
+ (id)orMatch:(id)arg1;
+ (id)trueMatch;

@end
