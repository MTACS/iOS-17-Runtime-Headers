
@interface UIKBAutoFillTestTableViewDataSource : NSObject <NSCoding> {
    NSMutableDictionary * _footerDataMap;
    NSMutableDictionary * _headerDataMap;
    NSMutableDictionary * _rowCountMap;
    NSMutableDictionary * _visibleCellDataMap;
}

@property (nonatomic, readonly) long long numberOfSections;

- (void).cxx_destruct;
- (id)cellForRowAtIndexPath:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)heightForFooterInSection:(long long)arg1;
- (double)heightForHeaderInSection:(long long)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)setCellData:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)setFooterData:(id)arg1 forSection:(long long)arg2;
- (void)setHeaderData:(id)arg1 forSection:(long long)arg2;
- (void)setNumberOfRows:(long long)arg1 forSection:(long long)arg2;
- (id)titleForFooterInSection:(long long)arg1;
- (id)titleForHeaderInSection:(long long)arg1;
- (id)viewForFooterInSection:(long long)arg1;
- (id)viewForHeaderInSection:(long long)arg1;

@end
