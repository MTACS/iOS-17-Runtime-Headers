
@interface AMSNotificationSettingsSection : NSObject {
    NSString * _footer;
    NSString * _identifier;
    NSArray * _items;
    NSString * _title;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *footer;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)footer;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithTitle:(id)arg1 footer:(id)arg2 items:(id)arg3;
- (id)items;
- (id)title;

@end
