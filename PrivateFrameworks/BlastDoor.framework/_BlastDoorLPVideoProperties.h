
@interface _BlastDoorLPVideoProperties : NSObject <NSCopying> {
    NSString * _accessibilityText;
    bool  _hasAudio;
}

@property (nonatomic, copy) NSString *accessibilityText;
@property (nonatomic) bool hasAudio;

- (void).cxx_destruct;
- (id)accessibilityText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasAudio;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setAccessibilityText:(id)arg1;
- (void)setHasAudio:(bool)arg1;

@end
