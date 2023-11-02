
@interface DTKPKDebugCodeWithName : NSObject <NSSecureCoding> {
    union { 
        unsigned int value; 
        struct { 
            unsigned int qualifier : 2; 
            unsigned int code : 14; 
            unsigned int subclass : 8; 
            unsigned int classID : 8; 
        } field; 
    }  _kdebugCode;
    NSString * _name;
}

@property (nonatomic, readonly) union { unsigned int x1; struct { unsigned int x_2_1_1 : 2; unsigned int x_2_1_2 : 14; unsigned int x_2_1_3 : 8; unsigned int x_2_1_4 : 8; } x2; } kdebugCode;
@property (nonatomic, readonly, retain) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(unsigned int)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (union { unsigned int x1; struct { unsigned int x_2_1_1 : 2; unsigned int x_2_1_2 : 14; unsigned int x_2_1_3 : 8; unsigned int x_2_1_4 : 8; } x2; })kdebugCode;
- (id)name;

@end
