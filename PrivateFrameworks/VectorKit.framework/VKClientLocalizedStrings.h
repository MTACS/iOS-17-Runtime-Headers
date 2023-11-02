
@interface VKClientLocalizedStrings : NSObject {
    NSString * _locale;
    NSDictionary * _stringDictionary;
}

- (void).cxx_destruct;
- (void)getAnnotationTextForChargersAvailable:(unsigned long long)arg1 total:(unsigned long long)arg2 text:(id*)arg3 locale:(id*)arg4;
- (void)getAnnotationTextForChargersNoStatus:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
- (void)getAnnotationTextForChargersNoneAvailable:(id*)arg1 locale:(id*)arg2;
- (void)getClusterAnnotationTextForClusterCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
- (void)getTextForKey:(id)arg1 text:(id*)arg2 locale:(id*)arg3;
- (id)initWithStrings:(id)arg1 locale:(id)arg2;

@end
