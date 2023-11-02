
@interface PKPassTileStateMetadata : NSObject <NSSecureCoding> {
    long long  _type;
}

@property (nonatomic, readonly) PKPassTileStateMetadataVehicleFunction *metadataTypeVehicleFunction;
@property (nonatomic, readonly) long long type;

+ (id)_createForType:(long long)arg1 dictionary:(id)arg2;
+ (id)_createWithType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (bool)_setupWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToUnresolvedMetadata:(id)arg1;
- (id)metadataTypeVehicleFunction;
- (long long)type;

@end
