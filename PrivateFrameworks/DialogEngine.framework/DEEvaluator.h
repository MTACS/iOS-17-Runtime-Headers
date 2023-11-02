
@interface DEEvaluator : NSObject {
    id  _globalParameters;
    NSString * _locale;
    id  _parameters;
    NSString * _propName;
    NSString * _templateDir;
    NSString * _typeName;
}

@property (nonatomic, retain) id globalParameters;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) id parameters;
@property (nonatomic, retain) NSString *propName;
@property (nonatomic, retain) NSString *templateDir;
@property (nonatomic, retain) NSString *typeName;

- (void).cxx_destruct;
- (id)evaluate;
- (id)globalParameters;
- (id)locale;
- (id)parameters;
- (id)propName;
- (void)setGlobalParameters:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setPropName:(id)arg1;
- (void)setTemplateDir:(id)arg1;
- (void)setTypeName:(id)arg1;
- (id)templateDir;
- (id)typeName;

@end
