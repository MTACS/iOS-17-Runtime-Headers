
@interface WDTableCell : NSObject {
    NSString * mIdentifier;
    unsigned long long  mIndex;
    WDTableCellProperties * mProperties;
    WDTableRow * mRow;
    WDText * mText;
    bool  mUseTrackedProperties;
}

@property (readonly) WDTableRow *row;

- (void).cxx_destruct;
- (void)clearProperties;
- (long long)compareIndex:(id)arg1;
- (id)description;
- (id)identifier;
- (unsigned long long)index;
- (id)initWithRow:(id)arg1 at:(unsigned long long)arg2;
- (id)properties;
- (id)row;
- (void)setIdentifier:(id)arg1;
- (void)setUseTrackedProperties:(bool)arg1;
- (id)text;
- (bool)useTrackedProperties;

@end
