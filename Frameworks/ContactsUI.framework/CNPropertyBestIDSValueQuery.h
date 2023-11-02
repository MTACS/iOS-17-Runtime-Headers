
@interface CNPropertyBestIDSValueQuery : NSObject {
    <CNPropertyBestIDSValueQueryDelegate> * _delegate;
    NSArray * _idsHandles;
    <CNCancelable> * _idsLookupToken;
    NSArray * _propertyItems;
    NSMutableArray * _validIDSHandles;
    NSMutableArray * _validIDSItems;
}

@property (nonatomic, readonly) CNPropertyGroupItem *bestIDSProperty;
@property (nonatomic) <CNPropertyBestIDSValueQueryDelegate> *delegate;
@property (nonatomic, retain) NSArray *idsHandles;
@property (nonatomic, retain) <CNCancelable> *idsLookupToken;
@property (nonatomic, retain) NSArray *propertyItems;
@property (nonatomic, retain) NSMutableArray *validIDSHandles;
@property (nonatomic, readonly) NSMutableArray *validIDSItems;

- (void).cxx_destruct;
- (id)bestIDSProperty;
- (void)cancel;
- (id)delegate;
- (id)idsHandles;
- (id)idsLookupToken;
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2;
- (id)initWithPropertyItems:(id)arg1 service:(id)arg2 idsAvailabilityProvider:(id)arg3 schedulerProvider:(id)arg4;
- (id)propertyItems;
- (void)setDelegate:(id)arg1;
- (void)setIdsHandles:(id)arg1;
- (void)setIdsLookupToken:(id)arg1;
- (void)setPropertyItems:(id)arg1;
- (void)setValidIDSHandles:(id)arg1;
- (id)validIDSHandles;
- (id)validIDSItems;

@end
