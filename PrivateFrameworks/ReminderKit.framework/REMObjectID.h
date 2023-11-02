
@interface REMObjectID : NSObject <NSCopying, NSSecureCoding, REMCRMergeableDataType, REMDAChangedIdentifierResult> {
    NSString * _entityName;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *entityName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *stringRepresentation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *urlRepresentation;
@property (nonatomic, readonly) NSUUID *uuid;

+ (void)initialize;
+ (id)objectIDWithURL:(id)arg1;
+ (id)objectIDWithUUID:(id)arg1 entityName:(id)arg2;
+ (void)rem_registerClassAtCRCoderIfNeeded;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (void)encodeWithCRCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (unsigned long long)hash;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 entityName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (id)redactedDescription;
- (void)setDocument:(id)arg1;
- (id)stringRepresentation;
- (id)tombstone;
- (id)urlRepresentation;
- (id)uuid;
- (void)walkGraph:(id /* block */)arg1;

@end
