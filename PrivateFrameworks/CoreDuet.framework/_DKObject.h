
@interface _DKObject : NSObject <NSSecureCoding, _DKProtobufConverting> {
    NSUUID * _UUID;
    NSDate * _creationDate;
    NSDate * _localCreationDate;
    _DKSource * _source;
}

@property (retain) NSUUID *UUID;
@property (retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSDate *localCreationDate;
@property (retain) _DKSource *source;
@property (readonly) Class superclass;

+ (id)entityName;
+ (id)fetchObjectWithUUID:(id)arg1 context:(id)arg2;
+ (id)fromPBCodable:(id)arg1;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(bool)arg2 excludedMetadataKeys:(id)arg3 cache:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (bool)boolValue;
- (bool)copyBaseObjectInfoFromManagedObject:(id)arg1 cache:(id)arg2;
- (bool)copyToManagedObject:(id)arg1;
- (id)creationDate;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (id)localCreationDate;
- (void)setCreationDate:(id)arg1;
- (void)setLocalCreationDate:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)source;
- (id)stringValue;
- (id)toPBCodable;
- (long long)typeCode;

@end
