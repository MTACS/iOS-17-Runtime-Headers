
@interface KCSharingGroupUpdateRequest : NSObject <NSSecureCoding> {
    KCSharingGroup * _group;
}

@property (nonatomic, readonly) KCSharingGroup *group;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)group;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdatedGroup:(id)arg1;

@end
