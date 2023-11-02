
@interface FSPathURLResource : FSResource {
    NSURL * _url;
}

@property (readonly) NSURL *url;

+ (id)newWithURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)getResourceID;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)kind;
- (id)url;

@end
