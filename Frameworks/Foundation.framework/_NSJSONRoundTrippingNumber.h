
@interface _NSJSONRoundTrippingNumber : NSObject <NSSecureCoding> {
    NSNumber * _number;
    NSString * _representation;
}

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (bool)isSubclassOfClass:(Class)arg1;
+ (bool)supportsSecureCoding;

- (bool)_allowsDirectEncoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumber:(id)arg1 representation:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNumber:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isNSNumber__;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)stringValue;
- (Class)superclass;

@end
