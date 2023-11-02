
@interface PVAppIdentityDigest : NSObject <NSSecureCoding> {
    NSData * data0;
    NSData * data1;
    NSData * data2;
    NSData * data3;
    NSData * data4;
    NSData * data5;
    NSError * error;
    NSNumber * version;
}

+ (id)digestWithErrorCode:(long long)arg1;
+ (id)digestWithTimeoutError;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)getError;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1 version:(id)arg2;
- (id)initWithVersion:(id)arg1 data0:(id)arg2 data1:(id)arg3 data2:(id)arg4 data3:(id)arg5 data4:(id)arg6 data5:(id)arg7;

@end
