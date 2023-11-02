
@interface EKAttachmentChange : EKObjectChange <EKOwnerIDProviding> {
    NSString * _externalID;
    EKObjectID * _ownerID;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly) EKObjectID *ownerID;
@property (nonatomic, readonly) NSString *uuid;

+ (int)entityType;

- (void).cxx_destruct;
- (id)externalID;
- (id)initWithChangeProperties:(id)arg1;
- (id)ownerID;
- (id)uuid;

@end
