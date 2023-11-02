
@interface EMObject : NSObject <EFPubliclyDescribable, EMObject, NSSecureCoding> {
    EMObjectID * _objectID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) EMObjectID *objectID;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInitWithObjectID:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectID;
- (void)setObjectID:(id)arg1;

@end
