
@interface NSFileProviderMovingInfo : NSObject <NSSecureCoding> {
    NSURL * destinationDirectoryURL;
}

@property (readonly) NSURL *destinationDirectoryURL;

+ (id)infoWithDestinationDirectoryURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)destinationDirectoryURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
