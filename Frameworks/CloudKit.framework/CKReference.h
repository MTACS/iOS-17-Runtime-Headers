
@interface CKReference : NSObject <CKRecordValue, HMBModelObjectStorage, NSCopying, NSSecureCoding> {
    CKRecordID * _recordID;
    unsigned long long  _referenceAction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *hmbDescription;
@property (nonatomic, readonly, copy) CKRecordID *recordID;
@property (nonatomic, readonly) unsigned long long referenceAction;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (unsigned long long)ckReferenceActionForCKDPRecordReferenceType:(int)arg1;
+ (int)ckdpReferenceTypeForCKReferenceAction:(unsigned long long)arg1;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initInternal;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1 action:(unsigned long long)arg2;
- (id)initWithRecordID:(id)arg1 action:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)recordID;
- (unsigned long long)referenceAction;
- (void)setRecordID_modelMutation:(id)arg1;
- (void)setReferenceAction_modelMutation:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id*)arg3;

- (id)hmbDescription;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id*)arg2;

@end
