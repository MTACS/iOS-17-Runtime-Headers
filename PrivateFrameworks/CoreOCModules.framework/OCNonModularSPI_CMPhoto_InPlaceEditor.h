
@interface OCNonModularSPI_CMPhoto_InPlaceEditor : NSObject <CMPhotoInPlaceHEIFEditorDelegate> {
    NSDictionary * _modifiedCustom;
    NSArray * _modifiedExtrinsicsPosition;
    NSArray * _modifiedExtrinsicsRotation;
    NSData * _modifiedXMP;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *modifiedCustom;
@property (retain) NSArray *modifiedExtrinsicsPosition;
@property (retain) NSArray *modifiedExtrinsicsRotation;
@property (retain) NSData *modifiedXMP;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)extrinsics:(id)arg1 forIndex:(long long)arg2 modifiedExtrinsics:(id*)arg3;
- (int)metadataPayload:(id)arg1 forImageIndex:(long long)arg2 payloadIndex:(long long)arg3 withType:(unsigned long long)arg4 customMetadataIdentifier:(id)arg5 modifiedData:(id*)arg6;
- (id)modifiedCustom;
- (id)modifiedExtrinsicsPosition;
- (id)modifiedExtrinsicsRotation;
- (id)modifiedXMP;
- (void)setModifiedCustom:(id)arg1;
- (void)setModifiedExtrinsicsPosition:(id)arg1;
- (void)setModifiedExtrinsicsRotation:(id)arg1;
- (void)setModifiedXMP:(id)arg1;
- (bool)shouldModifyMetadataForImageIndex:(long long)arg1 payloadIndex:(long long)arg2 withType:(unsigned long long)arg3 customMetadataIdentifier:(id)arg4;
- (void)updateModifiedCustom:(id)arg1;
- (void)updateModifiedExtrinsicsPosition:(id)arg1 rotation:(id)arg2;
- (void)updateModifiedXMP:(id)arg1;

@end
