
@interface TMLMacroText : NSObject {
    NSString * basePath;
    NSString * filename;
    NSString * macroText;
}

@property (nonatomic, retain) NSString *basePath;
@property (nonatomic, retain) NSString *filename;
@property (nonatomic, retain) NSString *macroText;

+ (id)macroTextWithMacroText:(id)arg1 basePath:(id)arg2 filename:(id)arg3;

- (void).cxx_destruct;
- (id)basePath;
- (id)filename;
- (id)macroText;
- (void)setBasePath:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setMacroText:(id)arg1;

@end
