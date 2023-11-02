
@protocol PRPosterContentStyle <NSObject, NSSecureCoding, NSCopying>

@required

- (bool)allowsVariation;
- (void)applyStyleWithRenderer:(id <PRPosterContentStyleRenderer>)arg1;
- (NSArray *)colors;
- (NSString *)identifier;
- (NSString *)localizedName;
- (unsigned long long)type;

@end
