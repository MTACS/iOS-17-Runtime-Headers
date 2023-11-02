
@interface VUIFamilySharingMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal> {
    VUIMediaEntityType * _mediaEntityType;
    NSString * _objectIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) VUIMediaEntityType *mediaEntityType;
@property (nonatomic, retain) NSString *objectIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEntityIdentifier:(id)arg1 mediaEntityType:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mediaEntityType;
- (id)objectIdentifier;
- (void)setMediaEntityType:(id)arg1;
- (void)setObjectIdentifier:(id)arg1;

@end
