
@protocol TSDStyleOwning <NSObject>

@required

- (TSSPropertyMap *)pastedPropertyMapForStyle:(TSSStyle *)arg1 tailLineEndInfo:(int)arg2;
- (void)setStyle:(TSSStyle *)arg1;
- (TSSStyle *)style;
- (Class)styleClass;

@end
