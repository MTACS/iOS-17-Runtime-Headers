
@interface OADBlip : NSObject {
    OADSubBlip * mAltSubBlip;
    OADSubBlip * mMainSubBlip;
    unsigned int  mReferenceCount;
}

+ (id)pathExtensionForBlipType:(int)arg1;

- (void).cxx_destruct;
- (id)altSubBlip;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mainSubBlip;
- (unsigned int*)referenceCount;
- (void)setAltSubBlip:(id)arg1;
- (void)setMainSubBlip:(id)arg1;

@end
