
@interface PKDashboardPassAuxiliaryPassInformationItem : NSObject <PKDashboardItem> {
    PKPassAuxiliaryPassInformationItem * _item;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPassAuxiliaryPassInformationItem *item;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (id)item;
- (void)setItem:(id)arg1;

@end
