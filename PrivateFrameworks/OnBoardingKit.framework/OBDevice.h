
@interface OBDevice : NSObject {
    bool  _hasHomeButton;
    unsigned long long  _templateType;
    unsigned long long  _type;
}

@property (nonatomic) bool hasHomeButton;
@property (nonatomic) unsigned long long templateType;
@property (nonatomic) unsigned long long type;

+ (id)currentDevice;

- (bool)hasHomeButton;
- (bool)isMiniPad;
- (void)setHasHomeButton:(bool)arg1;
- (void)setTemplateType:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)templateType;
- (unsigned long long)templateTypeForBoundsWidth:(double)arg1;
- (unsigned long long)type;

@end
