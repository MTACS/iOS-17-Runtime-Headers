
@interface _NSJSONReader : NSObject

+ (bool)validForJSON:(id)arg1 depth:(unsigned long long)arg2 allowFragments:(bool)arg3;

- (id)parseData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)parseStream:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
