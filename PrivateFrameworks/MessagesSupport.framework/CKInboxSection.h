
@interface CKInboxSection : NSObject {
    NSString * _footer;
    NSString * _header;
    NSUUID * _identifier;
    NSArray * _items;
}

@property (nonatomic, copy) NSString *footer;
@property (nonatomic, copy) NSString *header;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSArray *items;

- (void).cxx_destruct;
- (id)footer;
- (id)header;
- (id)identifier;
- (id)initWithHeader:(id)arg1 footer:(id)arg2 items:(id)arg3;
- (id)items;
- (void)setFooter:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setItems:(id)arg1;

@end
