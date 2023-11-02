
@interface PGThrowbackThursdayMemoryTitleGenerator : PGTitleGenerator <PGSpecBasedTitleGeneratorDelegate> {
    long long  _numberOfYearsAgo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (id)initWithMomentNode:(id)arg1 numberOfYearsAgo:(long long)arg2 titleGenerationContext:(id)arg3;
- (id)titleGenerator:(id)arg1 inputForArgument:(id)arg2;

@end
