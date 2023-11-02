
@interface NSCloudKitMirroringResetMetadataRequest : NSCloudKitMirroringRequest {
    NSSet * _objectIDsToReset;
}

@property (nonatomic, copy) NSSet *objectIDsToReset;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)objectIDsToReset;
- (void)setObjectIDsToReset:(id)arg1;

@end
