
@interface NSXPCStoreManagedObjectArchivingToken : NSObject <NSCoding, NSSecureCoding> {
    NSURL * _managedObjectReferenceURI;
}

+ (bool)supportsSecureCoding;

- (id)URI;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURI:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
