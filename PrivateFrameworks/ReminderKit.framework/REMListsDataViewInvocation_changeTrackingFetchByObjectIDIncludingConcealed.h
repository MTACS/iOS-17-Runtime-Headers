
@interface REMListsDataViewInvocation_changeTrackingFetchByObjectIDIncludingConcealed : REMStoreInvocation <NSSecureCoding> {
    bool  _includeMarkedForDeletionOnly;
    NSArray * _objectIDs;
}

@property (nonatomic) bool includeMarkedForDeletionOnly;
@property (nonatomic, readonly) NSArray *objectIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)includeMarkedForDeletionOnly;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectIDs:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectIDs;
- (void)setIncludeMarkedForDeletionOnly:(bool)arg1;

@end
