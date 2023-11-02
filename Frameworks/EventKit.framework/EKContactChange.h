
@interface EKContactChange : EKObjectChange <EKOwnerIDProviding> {
    EKObjectID * _ownerID;
}

@property (nonatomic, readonly) EKObjectID *ownerID;

+ (int)entityType;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)arg1;
- (id)ownerID;

@end
