
@interface PTUIRowTableViewCell : UITableViewCell <PTRowObserver> {
    PTRow * _row;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PTRow *row;
@property (readonly) Class superclass;

+ (double)cellHeightForRow:(id)arg1;
+ (long long)cellStyleForRow:(id)arg1;
+ (id)reuseIdentifierForRow:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (id)row;
- (void)rowDidChangeImage:(id)arg1;
- (void)rowDidChangeTitle:(id)arg1;
- (void)rowDidChangeValue:(id)arg1;
- (void)rowDidReload:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setRow:(id)arg1;
- (void)updateCellCharacteristics;
- (void)updateDisplayedContent;
- (void)updateDisplayedValue;

@end
