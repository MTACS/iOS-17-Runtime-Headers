
@interface GDViewUpdateNameAndResponses : NSObject <NSSecureCoding> {
    NSString * _name;
    NSArray * _responses;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *responses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 responses:(id)arg2;
- (id)name;
- (id)responses;

@end
