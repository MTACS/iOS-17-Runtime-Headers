
@interface FSProbeResult : NSObject <NSSecureCoding> {
    NSUUID * _containerUUID;
    NSString * _name;
    int  _result;
}

@property (readonly) NSUUID *containerUUID;
@property (readonly) NSString *name;
@property (readonly) int result;

+ (id)newResult:(int)arg1 name:(id)arg2 uuid:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)classForCoder;
- (id)containerUUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(int)arg1 name:(id)arg2 uuid:(id)arg3;
- (id)name;
- (int)result;

@end
