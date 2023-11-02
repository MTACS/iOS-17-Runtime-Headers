
@interface CHUISWatchComplicationsWidgetSnapshotMetadata : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying> {
    CHSGaugeParameters * _gauge;
    NSArray * _gaugeMaximumLabelData;
    NSArray * _gaugeMinimumLabelData;
    NSData * _gaugeProviderData;
    NSArray * _labelData;
    NSArray * _outerLabelData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) CHSGaugeParameters *gauge;
@property (nonatomic, readonly, copy) NSArray *gaugeMaximumLabelData;
@property (nonatomic, readonly, copy) NSArray *gaugeMinimumLabelData;
@property (nonatomic, readonly, copy) NSData *gaugeProviderData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *labelData;
@property (nonatomic, readonly, copy) NSArray *outerLabelData;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_encodedLabelData:(id)arg1 atDirectory:(id)arg2;
- (id)_initWithSnapshotMetadata:(id)arg1;
- (id)copyForEncodingAtUrlDirectory:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)gauge;
- (id)gaugeMaximumLabelData;
- (id)gaugeMinimumLabelData;
- (id)gaugeProviderData;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)labelData;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)outerLabelData;

@end
