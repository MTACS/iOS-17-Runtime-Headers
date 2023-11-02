
@interface GQDTSpiceTableModel : GQDTTableModel

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (struct __CFArray { }*)createSizeArrayFromPositionVector:(void*)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (int)setColumnWidthsFromState:(id)arg1;
- (int)setRowHeightsFromState:(id)arg1;

@end
