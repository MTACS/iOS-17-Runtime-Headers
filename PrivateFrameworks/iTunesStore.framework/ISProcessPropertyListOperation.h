
@interface ISProcessPropertyListOperation : ISOperation {
    ISPropertyListProvider * _dataProvider;
    NSDictionary * _propertyList;
}

@property (retain) ISPropertyListProvider *dataProvider;

- (id)dataProvider;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;
- (void)run;
- (void)setDataProvider:(id)arg1;

@end
