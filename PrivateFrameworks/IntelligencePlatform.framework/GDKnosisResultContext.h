
@interface GDKnosisResultContext : GDGraphObjectContext {
    void gdSwiftGraphObjectContext;
    void knosisResultContext;
}

@property (nonatomic, readonly) _TtC20IntelligencePlatform26_GDSwiftGraphObjectContext *context;

- (void).cxx_destruct;
- (id)answers;
- (id)context;
- (bool)enumerateAnswersForEntityIdentifier:(id)arg1 block:(id /* block */)arg2 error:(id*)arg3;
- (bool)enumerateAnswersUsingBlock:(id /* block */)arg1 error:(id*)arg2;
- (id)init;

@end
