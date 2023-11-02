
@interface MIDICIProfile : NSObject <NSSecureCoding> {
    NSString * name;
    NSData * profileID;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSData *profileID;

+ (id)description;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (const void*)bytes;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)profileID;

@end
