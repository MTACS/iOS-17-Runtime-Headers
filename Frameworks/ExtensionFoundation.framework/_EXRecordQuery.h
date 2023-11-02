
@interface _EXRecordQuery : _EXQuery {
    struct { 
        unsigned int val[8]; 
    }  _hostAuditToken;
    NSPredicate * _predicate;
    LSExtensionPointRecord * _record;
}

@property (retain) LSExtensionPointRecord *record;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionPointIdentifier;
- (id)extensionPointRecords;
- (struct { unsigned int x1[8]; })hostAuditToken;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionPoint:(id)arg1;
- (bool)matchesRecord:(id)arg1;
- (unsigned int)platform;
- (id)predicate;
- (id)record;
- (void)setHostAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)setPredicate:(id)arg1;
- (void)setRecord:(id)arg1;

@end
