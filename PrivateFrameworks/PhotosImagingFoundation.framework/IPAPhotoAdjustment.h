
@interface IPAPhotoAdjustment : IPAAdjustment {
    NSDictionary * _autoSettings;
    bool  _enabled;
    NSString * _maskUUID;
}

@property (nonatomic, retain) NSDictionary *autoSettings;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) NSString *maskUUID;

- (void).cxx_destruct;
- (id)_debugDescriptionSuffix;
- (id)autoSettings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enabled;
- (id)maskUUID;
- (void)setAutoSettings:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setMaskUUID:(id)arg1;

@end
