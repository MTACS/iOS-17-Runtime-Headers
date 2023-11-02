
@interface MTLSharedEventHandle : NSObject <NSSecureCoding> {
    struct MTLSharedEventHandlePrivate { unsigned int x1; id x2; unsigned long long x3; } * _priv;
}

@property (readonly) NSString *label;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)eventPort;
- (id)initWithCoder:(id)arg1;
- (id)initWithSharedEvent:(id)arg1;
- (id)label;
- (unsigned long long)labelTraceID;

@end
