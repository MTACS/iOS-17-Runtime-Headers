
@protocol BNTemplateTextProviding <BNTemplateItemProviding>

@required

- (NSAttributedString *)templateItemAttributedText;
- (NSString *)templateItemText;

@end
