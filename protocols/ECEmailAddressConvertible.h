
@protocol ECEmailAddressConvertible <NSObject, NSCopying>

@required

- (ECEmailAddress *)emailAddressValue;
- (NSString *)stringValue;

@end
