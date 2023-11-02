
@interface HFOrderedHomeKitItemData : NSObject {
    NSString * _actionSetType;
    NSDate * _dateAdded;
    NSString * _title;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, copy) NSString *actionSetType;
@property (nonatomic, copy) NSDate *dateAdded;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSUUID *uniqueIdentifier;

+ (id)dataWithUniqueIdentifier:(id)arg1 title:(id)arg2 dateAdded:(id)arg3;

- (void).cxx_destruct;
- (id)actionSetType;
- (id)dateAdded;
- (void)setActionSetType:(id)arg1;
- (void)setDateAdded:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)title;
- (id)uniqueIdentifier;

@end
