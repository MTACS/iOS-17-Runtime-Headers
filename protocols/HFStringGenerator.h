
@protocol HFStringGenerator <NSObject, NSCopying>

@required

- (NSAttributedString *)dynamicStringForSize:(struct CGSize { double x1; double x2; })arg1 attributes:(NSDictionary *)arg2;
- (bool)prefersDynamicString;
- (NSAttributedString *)stringWithAttributes:(NSDictionary *)arg1;

@end
