
@interface CLSProgressReportingCapability : CLSObject <CLSRelationable> {
    NSString * _details;
    long long  _kind;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *details;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long kind;
@property (readonly) Class superclass;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)description;
- (id)details;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKind:(long long)arg1 details:(id)arg2;
- (long long)kind;
- (void)mergeWithObject:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setKind:(long long)arg1;
- (bool)validateObject:(id*)arg1;

@end
