
@interface MKImportAnalytics : NSObject {
    NSString * _contentType;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)complete:(bool)arg1;
- (id)initWithContentType:(long long)arg1;
- (void)send:(id)arg1;
- (void)send:(id)arg1 extension:(id)arg2;

@end
