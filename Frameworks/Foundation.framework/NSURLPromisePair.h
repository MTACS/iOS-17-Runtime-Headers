
@interface NSURLPromisePair : NSObject <NSSecureCoding> {
    NSURL * _logicalURL;
    NSURL * _physicalURL;
}

@property (readonly, copy) NSURL *URL;
@property (readonly) NSURL *logicalURL;
@property (readonly) NSURL *physicalURL;

+ (id)pairWithLogicalURL:(id)arg1 physicalURL:(id)arg2;
+ (id)pairWithURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)URL;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logicalURL;
- (id)physicalURL;

@end
