
@interface _PKDashboardItemWrapper : NSObject <PKIdentifiable> {
    <NSCopying> * _identifier;
    <PKDashboardItem> * _wrappedItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) <PKDashboardItem> *wrappedItem;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithDashboardItem:(id)arg1;
- (void)setWrappedItem:(id)arg1;
- (id)wrappedItem;

@end
