
@interface AFDisambiguationEvent : NSObject <NSSecureCoding> {
    NSDate * _date;
    NSString * _itemIdentifier;
    long long  _selectionType;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic) long long selectionType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemIdentifier;
- (long long)selectionType;
- (void)setDate:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setSelectionType:(long long)arg1;

@end
