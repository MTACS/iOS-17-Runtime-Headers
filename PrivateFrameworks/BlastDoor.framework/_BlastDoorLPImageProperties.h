
@interface _BlastDoorLPImageProperties : NSObject <NSCopying> {
    NSString * _accessibilityText;
    _BlastDoorLPPlatformColor * _overlaidTextColor;
    long long  _type;
}

@property (nonatomic, copy) NSString *accessibilityText;
@property (nonatomic, retain) _BlastDoorLPPlatformColor *overlaidTextColor;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)accessibilityText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)overlaidTextColor;
- (void)setAccessibilityText:(id)arg1;
- (void)setOverlaidTextColor:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
