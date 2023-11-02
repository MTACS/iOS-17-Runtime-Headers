
@interface BKSContextRelativePoint : NSObject <BSXPCSecureCoding> {
    unsigned int  _contextID;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
}

@property (nonatomic, readonly) unsigned int contextID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } point;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (unsigned int)contextID;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithPoint:(struct CGPoint { double x1; double x2; })arg1 contextID:(unsigned int)arg2;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })point;

@end
