
@interface RMDummyData : NSObject <NSSecureCoding> {
    struct { 
        union { 
            float data[16]; 
            unsigned long long abstime; 
        } ; 
    }  _payload;
}

@property (nonatomic, readonly) struct { union { float x_1_1_1[16]; unsigned long long x_1_1_2; } x1; } payload;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(struct { union { float x_1_1_1[16]; unsigned long long x_1_1_2; } x1; })arg1;
- (struct { union { float x_1_1_1[16]; unsigned long long x_1_1_2; } x1; })payload;

@end
