
@interface GDViewUpdateNameAndRequests : NSObject <NSSecureCoding> {
    NSString * _name;
    NSArray * _requests;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *requests;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 requests:(id)arg2;
- (id)name;
- (id)requests;

@end
