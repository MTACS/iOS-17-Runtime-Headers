
@interface CNChangeHistoryLegacyResultConverter : NSObject {
    NSArray * _additionalContactKeyDescriptors;
    CNContactStore * _contactStore;
    CNChangeHistoryEventFactory * _factory;
}

@property (readonly, copy) NSArray *additionalContactKeyDescriptors;
@property (readonly) CNContactStore *contactStore;
@property (readonly) CNChangeHistoryEventFactory *factory;

- (void).cxx_destruct;
- (id)additionalContactKeyDescriptors;
- (id)contactStore;
- (id)eventsFromResult:(id)arg1;
- (id)factory;
- (id)initWithContactStore:(id)arg1 additionalContactKeyDescriptors:(id)arg2;

@end
