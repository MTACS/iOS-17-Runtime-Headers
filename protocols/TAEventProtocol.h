
@protocol TAEventProtocol <NSObject, NSSecureCoding, NSCopying>

@required

- (NSString *)description;
- (NSDictionary *)descriptionDictionary;
- (NSDate *)getDate;

@optional

- (unsigned long long)getEventSubtype;

@end
