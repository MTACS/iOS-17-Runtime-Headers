
@interface VCSParser : NSObject

+ (unsigned long long)beginVCSEntity:(id)arg1 withParseState:(id)arg2;
+ (unsigned long long)decodeVCSLine:(id)arg1 withParseState:(id)arg2;
+ (unsigned long long)endVCSEntity:(id)arg1 withParseState:(id)arg2;
+ (id)parseVCSData:(id)arg1;
+ (id)parseVCSFile:(id)arg1;

@end
