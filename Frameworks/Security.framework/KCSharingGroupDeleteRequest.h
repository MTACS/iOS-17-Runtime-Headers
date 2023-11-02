
@interface KCSharingGroupDeleteRequest : NSObject <NSSecureCoding> {
    NSString * _groupID;
}

@property (nonatomic, readonly) NSString *groupID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupID:(id)arg1;

@end
