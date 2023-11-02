
@interface _HKXPCAuditToken : NSObject <NSCopying> {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly) int processIdentifier;
@property (nonatomic, readonly, copy) NSString *signingIdentifier;

+ (id)auditTokenForCurrentTask;
+ (id)signingIdentifierFromAuditToken:(struct { unsigned int x1[8]; })arg1;

- (struct { unsigned int x1[8]; })auditToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (bool)isEqual:(id)arg1;
- (int)processIdentifier;
- (id)signingIdentifier;

@end
