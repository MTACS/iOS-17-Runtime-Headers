
@interface VMUProgressBar : NSObject {
    unsigned int  _color;
    unsigned long long  _failures;
    NSString * _itemName;
    unsigned long long  _itemsDone;
    unsigned long long  _successes;
    NSString * _title;
    unsigned long long  _totalItems;
}

- (void).cxx_destruct;
- (void)_printProgressBar;
- (void)colorize:(unsigned int)arg1;
- (void)itemCompleteWithStatus:(bool)arg1;
- (void)setTitle:(id)arg1 withTotalItems:(unsigned long long)arg2;
- (void)updateItemName:(id)arg1;

@end
