
@interface FSAuditToken : NSObject <NSSecureCoding> {
    struct { 
        unsigned int val[8]; 
    }  _token;
}

@property (nonatomic, readonly) unsigned int egid;
@property (nonatomic, readonly) unsigned int euid;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) int pidversion;
@property (nonatomic, readonly) unsigned int rgid;
@property (nonatomic, readonly) unsigned int ruid;

+ (id)new;
+ (id)newWithData:(id)arg1;
+ (id)newWithToken:(struct { unsigned int x1[8]; })arg1;
+ (bool)supportsSecureCoding;

- (Class)classForCoder;
- (unsigned int)egid;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)euid;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(const struct { unsigned int x1[8]; }*)arg1;
- (int)pid;
- (int)pidversion;
- (unsigned int)rgid;
- (unsigned int)ruid;

@end
