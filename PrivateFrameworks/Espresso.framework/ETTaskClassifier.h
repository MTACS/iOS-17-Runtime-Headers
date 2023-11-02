
@interface ETTaskClassifier : ETTask {
    NSArray * _class_names;
}

@property NSArray *class_names;

- (id)class_names;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3;
- (id)initWithModelDef:(id)arg1 optimizerDef:(id)arg2 extractor:(id)arg3 needWeightsInitialization:(bool)arg4;
- (void)setClass_names:(id)arg1;

@end
