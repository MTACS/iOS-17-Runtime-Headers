
@interface CHUISWatchComplicationsWidgetSnapshotMetadataLabelData : NSObject <BSXPCSecureCoding, NSCopying> {
    NSData * _data;
    NSFileHandle * _dataFileHandle;
}

@property (nonatomic, readonly, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)copyForEncodingAtUrlDirectory:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dataFileHandle;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
