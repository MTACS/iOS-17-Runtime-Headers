
@interface AXAuditSize : NSObject <AXAuditTransportableObjectProtocol> {
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

+ (id)createWithSize:(struct CGSize { double x1; double x2; })arg1;
+ (void)registerTransportableObjectWithManager:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
