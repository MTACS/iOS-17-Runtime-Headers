
@interface UIAccessibilityLegacyCustomAction : UIAccessibilityCustomAction {
    unsigned long long  _actionIndex;
}

@property (nonatomic) unsigned long long actionIndex;

- (unsigned long long)actionIndex;
- (void)setActionIndex:(unsigned long long)arg1;

@end
