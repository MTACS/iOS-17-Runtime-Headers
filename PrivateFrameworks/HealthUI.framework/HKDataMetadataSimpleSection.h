
@interface HKDataMetadataSimpleSection : HKDataMetadataSection <HKDataMetadataSectionDataReceiver> {
    NSMutableArray * _rows;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *rows;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)_rowTitles;
- (id)_valueForRowWithTitle:(id)arg1;
- (void)addText:(id)arg1 detail:(id)arg2;
- (void)addText:(id)arg1 detail:(id)arg2 baseIdentifier:(id)arg3;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)initWithTitle:(id)arg1;
- (unsigned long long)numberOfRowsInSection;
- (id)rows;
- (id)sectionTitle;
- (void)setRows:(id)arg1;
- (id)title;

@end
