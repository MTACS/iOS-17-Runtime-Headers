
@protocol INUICKPInterfaceSectionModeling <NSObject, NSCopying>

@required

- (unsigned long long)interactiveBehavior;
- (bool)isWildCardSection;
- (NSSet *)parameters;
- (void)setParameters:(NSSet *)arg1;

@end
