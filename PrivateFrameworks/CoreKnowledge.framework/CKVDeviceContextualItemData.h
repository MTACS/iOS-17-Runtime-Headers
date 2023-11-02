
@interface CKVDeviceContextualItemData : NSObject {
    NSNumber * _contentIdentifier;
    bool  _localDevice;
    NSSet * _metaContentIdentities;
    NSSet * _timestamps;
}

@property (nonatomic, readonly) NSNumber *contentIdentifier;
@property (nonatomic, readonly) bool localDevice;
@property (nonatomic, readonly) NSSet *metaContentIdentities;
@property (nonatomic, readonly) NSSet *timestamps;

- (void).cxx_destruct;
- (id)contentIdentifier;
- (id)initWithMetaContentIdentities:(id)arg1 timestamps:(id)arg2 contentIdentifier:(id)arg3 localDevice:(bool)arg4;
- (bool)localDevice;
- (id)metaContentIdentities;
- (id)timestamps;

@end
