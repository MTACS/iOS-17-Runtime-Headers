
@interface NLGazetteer : NSObject {
    void * _gazetteer;
    NSString * _language;
    NLModel * _nlModel;
}

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *language;

+ (id)gazetteerWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)gazetteerWithData:(id)arg1 error:(id*)arg2;
+ (id)gazetteerWithMLModel:(id)arg1 error:(id*)arg2;
+ (bool)writeGazetteerForDictionary:(id)arg1 language:(id)arg2 toURL:(id)arg3 error:(id*)arg4;
+ (bool)writeGazetteerMLModelForDictionary:(id)arg1 language:(id)arg2 toURL:(id)arg3 options:(id)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (void)_addImplementationToArray:(struct __CFArray { }*)arg1;
- (void*)_gazetteerRef;
- (id)data;
- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithDictionary:(id)arg1 language:(id)arg2 error:(id*)arg3;
- (id)initWithMLModel:(id)arg1 error:(id*)arg2;
- (id)initWithNLModel:(id)arg1 error:(id*)arg2;
- (id)labelForString:(id)arg1;
- (id)labels;
- (id)language;
- (id)modelDescription;
- (bool)writeMLModelToURL:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
