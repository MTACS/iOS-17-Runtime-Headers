
@interface _SVDMutableSpeakerCapability : SVDSpeakerCapability <SVDSpeakerCapabilityMutating> {
    long long  _qualityScore;
    long long  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long qualityScore;
@property (nonatomic) long long status;
@property (readonly) Class superclass;

- (long long)qualityScore;
- (void)setQualityScore:(long long)arg1;
- (void)setStatus:(long long)arg1;
- (void)setSupportStatus:(long long)arg1;
- (long long)status;

@end
