
@interface FPTestingCollisionResolution : FPTestingOperation <NSFileProviderTestingCollisionResolution> {
    <NSFileProviderItem> * _renamedItem;
    long long  _snapshotVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSFileProviderItem> *renamedItem;
@property (nonatomic, readonly) unsigned long long side;
@property (nonatomic, readonly) long long snapshotVersion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asCollisionResolution;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperationIdentifier:(id)arg1 renamedItem:(id)arg2 snapshotVersion:(long long)arg3;
- (id)renamedItem;
- (unsigned long long)side;
- (long long)snapshotVersion;
- (long long)type;

@end
