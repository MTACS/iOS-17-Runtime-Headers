
@interface AXAuditNode : NSObject {
    AXAuditElement * _auditElement;
    NSArray * _children;
    NSString * _className;
    NSString * _humanReadableDescription;
    NSString * _humanReadableRoleDescription;
    bool  _isIgnored;
}

@property (nonatomic, retain) AXAuditElement *auditElement;
@property (nonatomic, retain) NSArray *children;
@property (nonatomic, copy) NSString *className;
@property (nonatomic, copy) NSString *humanReadableDescription;
@property (nonatomic, copy) NSString *humanReadableRoleDescription;
@property (nonatomic) bool isIgnored;

+ (void)registerTransportableObjectWithManager:(id)arg1;

- (void).cxx_destruct;
- (void)_printDescendantsWithLevel:(unsigned long long)arg1;
- (id)auditElement;
- (id)children;
- (id)className;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)debugPrintDescendants;
- (id)description;
- (unsigned long long)hash;
- (id)humanReadableDescription;
- (id)humanReadableRoleDescription;
- (id)initWithAuditElement:(id)arg1 description:(id)arg2 roleDescription:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isIgnored;
- (void)setAuditElement:(id)arg1;
- (void)setChildren:(id)arg1;
- (void)setClassName:(id)arg1;
- (void)setHumanReadableDescription:(id)arg1;
- (void)setHumanReadableRoleDescription:(id)arg1;
- (void)setIsIgnored:(bool)arg1;

@end
