
@interface BAGFile : NSObject <BAGResource, NSSecureCoding> {
    NSString * _contentType;
    BAGResourceOptions * _options;
    NSData * _resource;
}

@property (nonatomic, retain) NSString *contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BAGResourceOptions *options;
@property (nonatomic, retain) NSData *resource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)options;
- (id)resource;
- (void)setContentType:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setResource:(id)arg1;
- (unsigned long long)type;

@end
