
@protocol GEOServerConditionalString <NSObject, NSCoding>

@required

- (<GEOServerCondition> *)condition;
- (<GEOServerFormattedString> *)formattedString;

@end
