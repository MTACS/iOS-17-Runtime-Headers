
@interface HDFHIRResourceLastSeenObject : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _lastSeenDate;
    HKFHIRIdentifier * _resourceIdentifier;
    NSURL * _sourceURL;
}

@property (nonatomic, readonly, copy) NSDate *lastSeenDate;
@property (nonatomic, readonly, copy) HKFHIRIdentifier *resourceIdentifier;
@property (nonatomic, readonly, copy) NSURL *sourceURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResourceIdentifier:(id)arg1 sourceURL:(id)arg2 lastSeenDate:(id)arg3;
- (id)lastSeenDate;
- (id)resourceIdentifier;
- (id)sourceURL;

@end
