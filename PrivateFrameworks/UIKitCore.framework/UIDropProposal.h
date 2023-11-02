
@interface UIDropProposal : NSObject <NSCopying> {
    unsigned long long  _operation;
    bool  _precise;
    long long  _preferredBadgeStyle;
    bool  _prefersFullSizePreview;
}

@property (nonatomic) unsigned long long operation;
@property (getter=isPrecise, nonatomic) bool precise;
@property (getter=_preferredBadgeStyle, setter=_setPreferredBadgeStyle:, nonatomic) long long preferredBadgeStyle;
@property (nonatomic) bool prefersFullSizePreview;

+ (id)new;

- (long long)_preferredBadgeStyle;
- (void)_setPreferredBadgeStyle:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithDropOperation:(unsigned long long)arg1;
- (bool)isPrecise;
- (unsigned long long)operation;
- (bool)prefersFullSizePreview;
- (void)setOperation:(unsigned long long)arg1;
- (void)setPrecise:(bool)arg1;
- (void)setPrefersFullSizePreview:(bool)arg1;

@end
