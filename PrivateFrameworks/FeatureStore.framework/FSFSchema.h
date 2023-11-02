
@interface FSFSchema : NSObject {
    NSDictionary * _schemaData;
}

@property (nonatomic, readonly) NSDictionary *schemaData;

- (void).cxx_destruct;
- (id)initSchemaForClass:(id)arg1 inLanguage:(id)arg2 withRepoUrl:(id)arg3 pkgName:(id)arg4 version:(id)arg5;
- (id)schemaData;

@end
