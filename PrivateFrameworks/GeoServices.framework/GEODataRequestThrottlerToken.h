
@interface GEODataRequestThrottlerToken : NSObject <NSSecureCoding> {
    NSString * _bundleId;
    double  _createdAt;
    struct { 
        int type; 
        union { 
            int raw; 
            int tile; 
            int placeRequest; 
        } subtype; 
    }  _kind;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 forClient:(id)arg2;
- (id)initWithXPCCoder:(id)arg1;
- (bool)isValidForRequest:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 client:(id)arg2;
- (void)refresh;

@end
