
@interface SUConcernListDataSource : SUTableDataSource {
    NSArray * _concerns;
    long long  _selectedConcernIndex;
    SUTextViewCell * _textViewCell;
}

@property (nonatomic, retain) NSArray *concerns;
@property (nonatomic) long long selectedConcernIndex;
@property (nonatomic, readonly) SUTextViewCell *textViewCell;

- (id)_titleCellForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (double)cellHeightForIndexPath:(id)arg1;
- (id)concerns;
- (void)dealloc;
- (id)init;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)selectedConcernIndex;
- (void)setConcerns:(id)arg1;
- (void)setSelectedConcernIndex:(long long)arg1;
- (long long)tableViewStyle;
- (id)textViewCell;

@end
