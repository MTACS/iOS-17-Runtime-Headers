
@interface AXAuditRange : NSObject <AXAuditTransportableObjectProtocol> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (readonly) Class superclass;

+ (id)createWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (void)registerTransportableObjectWithManager:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
