
@interface FPStringFormat : NSObject {
    NSString * _format;
    NSArray * _keyPaths;
}

@property (nonatomic, retain) NSString *format;
@property (nonatomic, retain) NSArray *keyPaths;
@property (readonly) unsigned long long length;

+ (id)formatForPlistObject:(id)arg1 localizationLookup:(id)arg2;
+ (id)formatForStringFormatDict:(id)arg1 localizationLookup:(id)arg2;

- (void).cxx_destruct;
- (id)evaluateWithValuesByName:(id)arg1 error:(id*)arg2;
- (id)format;
- (id)keyPaths;
- (unsigned long long)length;
- (void)setFormat:(id)arg1;
- (void)setKeyPaths:(id)arg1;

@end
