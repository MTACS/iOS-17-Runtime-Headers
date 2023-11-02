
@interface BLSAssertionIdentifier : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    int  _clientPid;
    unsigned long long  _count;
    int  _hostPid;
}

@property (nonatomic, readonly) int clientPid;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int hostPid;
@property (readonly) Class superclass;

+ (unsigned long long)nextCount;
+ (bool)supportsSecureCoding;

- (int)clientPid;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (int)hostPid;
- (id)initWithClientPid:(int)arg1 hostPid:(int)arg2 count:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
