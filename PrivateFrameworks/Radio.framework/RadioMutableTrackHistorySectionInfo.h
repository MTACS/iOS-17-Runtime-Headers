
@interface RadioMutableTrackHistorySectionInfo : RadioTrackHistorySectionInfo

@property (nonatomic, retain) NSString *indexTitle;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long numberOfObjects;
@property (nonatomic, retain) NSArray *objects;

- (void)setIndexTitle:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNumberOfObjects:(unsigned long long)arg1;
- (void)setObjects:(id)arg1;

@end
