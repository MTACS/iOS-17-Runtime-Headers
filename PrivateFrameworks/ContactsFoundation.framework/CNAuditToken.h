
@interface CNAuditToken : NSObject {
    struct { 
        unsigned int val[8]; 
    }  _audit_token;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } audit_token;

+ (id)auditToken:(struct { unsigned int x1[8]; })arg1;

- (struct { unsigned int x1[8]; })audit_token;

@end
