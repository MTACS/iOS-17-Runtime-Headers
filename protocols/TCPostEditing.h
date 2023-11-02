
@protocol TCPostEditing

@required

- (void)checkString:(NSString *)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 tagger:(TCTagger *)arg3 offset:(unsigned long long)arg4 options:(NSDictionary *)arg5 mutableResults:(NSMutableArray *)arg6;
- (id)initWithOptions:(NSDictionary *)arg1;
- (void)loadModelsInBackground:(bool)arg1;
- (void)resetModels;

@end
