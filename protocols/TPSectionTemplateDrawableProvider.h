
@protocol TPSectionTemplateDrawableProvider <NSObject>

@required

- (void)addSectionTemplateDrawable:(TSDDrawableInfo *)arg1 atIndex:(unsigned long long)arg2 insertContext:(TSKAddedToDocumentContext *)arg3 suppressDOLC:(bool)arg4;
- (void)addSectionTemplateDrawables:(NSArray *)arg1 atIndex:(unsigned long long)arg2 insertContext:(TSKAddedToDocumentContext *)arg3 suppressDOLC:(bool)arg4;
- (unsigned long long)countOfSectionTemplateDrawables;
- (unsigned long long)indexOfSectionTemplateDrawable:(TSDDrawableInfo *)arg1;
- (void)removeSectionTemplateDrawable:(TSDDrawableInfo *)arg1 suppressDOLC:(bool)arg2;
- (NSArray *)sectionTemplateDrawables;
- (NSArray *)sectionTemplateDrawablesSortedByZOrder:(NSSet *)arg1;

@end
