
@interface STUIMutableDataAccessStatusDomainData : STUIDataAccessStatusDomainData <STMutableStatusDomainData>

@property (nonatomic, readonly, copy) STMutableListData *attributionListData;
@property (nonatomic, copy) NSArray *dataAccessAttributions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)attributionListData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAttributionListData:(id)arg1;
- (void)setDataAccessAttributions:(id)arg1;

@end
