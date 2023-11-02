
@interface REMURLAttachment : REMAttachment {
    NSData * _metadata;
    NSURL * _url;
}

@property (nonatomic, retain) NSData *metadata;
@property (nonatomic, retain) NSURL *url;

+ (id)cdEntityName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_deepCopy;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 accountID:(id)arg2 reminderID:(id)arg3 url:(id)arg4 metadata:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
