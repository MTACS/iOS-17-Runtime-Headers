
@interface HKConceptRelationship : NSObject <NSCopying, NSObject, NSSecureCoding> {
    bool  _deleted;
    HKConcept * _destination;
    long long  _type;
    long long  _version;
    HKConcept * _weakDestination;
}

@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) HKConcept *destination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 destination:(id)arg2;
- (id)initWithType:(long long)arg1 destination:(id)arg2 version:(long long)arg3 deleted:(bool)arg4;
- (id)initWithType:(long long)arg1 destination:(id)arg2 weakDestination:(id)arg3 version:(long long)arg4 deleted:(bool)arg5;
- (id)initWithType:(long long)arg1 weakDestination:(id)arg2 version:(long long)arg3 deleted:(bool)arg4;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (long long)type;
- (long long)version;

@end
