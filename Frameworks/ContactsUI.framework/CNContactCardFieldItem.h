
@interface CNContactCardFieldItem : NSObject {
    NSString * _displayLabel;
    NSString * _displayValue;
    CNPropertyGroupItem * _groupItem;
}

@property (nonatomic, readonly) NSString *displayLabel;
@property (nonatomic, readonly) NSString *displayValue;
@property (nonatomic, readonly) CNPropertyGroupItem *groupItem;

+ (id)photoItem;

- (void).cxx_destruct;
- (id)displayLabel;
- (id)displayValue;
- (id)groupItem;
- (id)initWithDisplayLabel:(id)arg1;
- (id)initWithGroupItem:(id)arg1;

@end
