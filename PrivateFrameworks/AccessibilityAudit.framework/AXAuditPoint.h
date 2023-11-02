
@interface AXAuditPoint : NSObject <AXAuditTransportableObjectProtocol> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } point;
@property (readonly) Class superclass;

+ (id)createWithPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (void)registerTransportableObjectWithManager:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })point;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
