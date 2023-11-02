
@interface DEValidator : NSObject {
    NSString * _templateDir;
}

@property (nonatomic, retain) NSString *templateDir;

- (void).cxx_destruct;
- (id)jsonToResult:(id)arg1;
- (void)setTemplateDir:(id)arg1;
- (id)templateDir;
- (id)validate:(id)arg1 locale:(id)arg2;
- (id)validateFile:(id)arg1 locale:(id)arg2;
- (id)validateString:(id)arg1 localeString:(id)arg2;
- (id)validateWithParams:(id)arg1 locale:(id)arg2;

@end
